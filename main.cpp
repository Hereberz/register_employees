#include "employee.h"
//#include "function.h"
#include "engineer.h"
#include "developer.h"

#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;


vector<Employee*> loading();
int escolha(vector<Employee*> &employ);
void print(const vector<Employee*> &employ);
void printDev(const vector<Employee*> &employ);
void printEng(const vector<Employee*> &employ);
void saving(const vector<Employee*> &empo);
void printBySalary(const vector<Employee*> &employ);
void add(vector<Employee*> &employ);

vector<Employee*> loading(){
    ifstream fileh("exempro.dat");
    int num = 0;
    string temp;
    getline(fileh,temp);
    num = stoi(temp);
    vector<Employee*> employ;
    Employee *tempo;
    for (int i=0;i<num;i++)
    {
        string tipo;
        getline(fileh,tipo);

        if(tipo == "dev")
        {
            tempo = new Developer; 
            getline(fileh,temp);
            tempo->setName(temp);

            getline(fileh,temp);
            tempo->setSalary(stof(temp));
            
            getline(fileh,temp);
            tempo->setDate(temp);
            
            getline(fileh,temp);
            tempo->setLanguage(temp);
            
            employ.push_back(tempo);
        }
        if(tipo == "eng")
        {
            tempo = new Engineer; 
            getline(fileh,temp);
            tempo->setName(temp);

            getline(fileh,temp);
            tempo->setSalary(stof(temp));
            
            getline(fileh,temp);
            tempo->setDate(temp);
            
            getline(fileh,temp);
            tempo->setFormation(temp);
            
            employ.push_back(tempo);
        }
    }
    fileh.close();
    return employ;
}

int escolha( vector<Employee*> &employ){
    char select;
    char sel = 0;
    cin>>select;
    switch (select)
    {
    case '1':
        employ = loading();
        break;
    case '2':
        saving(employ);
        break;
    case '3':
        add(employ);
        break;
    case '4':
        print(employ);
        break;
    case '5':
        printBySalary(employ);
        break;
    case '6':
        cout<<"Qual função deseja listar?\n1 - Engenheiro\n2 - Programador";
        while(sel!='1' && sel!='2'){
            cin>>sel;
        };
        if(sel=='1'){
            printEng(employ);
        }
        else{
            printDev(employ);
        }
        print(employ);
        break;
    case '7':
        return 1;
        break;
    default:
        cout<< "\nOpção inválida!\n";
        break;
    }
    return 0;
}
void print(const vector<Employee*> &empo)
{
    for(unsigned int i=0;i<empo.size();i++){
        empo[i]->print();
    //empo.at(i)->print();
    }
}
void printDev(const vector<Employee*> &empo)
{
    for(unsigned int i=0;i<empo.size();i++){
//      cout<<endl<<endl<<empo[i]->type()<<endl<<endl;
        if(empo[i]->type()=="dev")
        {
            empo[i]->print();
        }
    }
}
void printEng(const vector<Employee*> &empo)
{
    for(unsigned int i=0;i<empo.size();i++){
//        cout<<endl<<endl<<empo[i]->type()<<endl<<endl;
        if(empo[i]->type()=="eng")
        {
        empo[i]->print();
        }
    }
}
bool minhaFuncao    (Employee *emp1, Employee *emp2) {return (emp1->getSalary()<emp2->getSalary());}
bool minhaFuncao2   (Employee *emp1, Employee *emp2) {return (emp1->getSalary()>emp2->getSalary());}
void saving(const vector<Employee*> &empo){

    cout<< "Salvando..."<<endl;
    ofstream myFile;
    int i=0;
    myFile.open("exempro.dat");
    myFile<< empo.size()<<endl;
    for (auto it=empo.begin(); it != empo.end(); it++)
    {
 
        myFile<< empo[i]->type() <<endl;
        myFile<< empo[i]->getName() <<endl;
        myFile<< empo[i]->getSalary() <<endl;
        myFile<< empo[i]->getDate() <<endl;
        
       if(empo[i]->type()=="dev"){
            myFile<< empo[i]->getLanguage() <<endl;
        }
        else{
            myFile<< empo[i]->getFormation() <<endl;
        }
        i++;
    }
    myFile.close();
}
void add(vector<Employee*> &employ){
    char sel= '0';
    cout<<"Qual função deseja criar?\n1 - Engenheiro\n2 - Programador\nEscolha: ";
    fflush(stdin);
        while(sel!='1' && sel!='2'){
            cin>>sel;
        };
    Employee *temp;                 //CRIAÇÃO DE FUNCIONARIOS
    string name;
    float salary;
    string date;
    string formation;
    if (sel == '1')
        {
            fflush(stdin);
            temp = new Engineer;

            cout<< "\nInsira o nome do usuário: ";
                fflush(stdin);
                cin.ignore();
                getline(cin, name);
                temp->setName(name);
            cout<< "Insira o salário do usuário: ";   
                fflush(stdin);
                cin.ignore();
                cin>> salary;
                temp->setSalary(salary);
            cout<< "Insira a data de admissão do usuário: ";   
                fflush(stdin);
                cin.ignore();
                cin>> date;
                temp->setDate(date);
            cout<< "\nInsira a formação do engenheiro: ";
                fflush(stdin);
                cin.ignore();
                cin>>formation;
                temp->setFormation(formation);
        }
    if (sel == '2')
        {
            fflush(stdin);
            temp = new Developer;

            cout<< "\nInsira o nome do usuário: ";
                fflush(stdin);
                cin.ignore();
                getline(cin, name);
                temp->setName(name);
            cout<< "Insira o salário do usuário: ";   
                fflush(stdin);
                cin.ignore();
                cin>> salary;
                temp->setSalary(salary);
            cout<< "Insira a data de admissão do usuário: ";   
                fflush(stdin);
                cin.ignore();
                cin>> date;
                temp->setDate(date);
            cout<< "\nInsira a formação do engenheiro: ";
                fflush(stdin);
                cin.ignore();
                cin>>formation;
                temp->setLanguage(formation);
        }
    employ.push_back(temp);
}
void menu(vector<Employee*> &employ){
do {
cout<<"\n 1 - Carregar dados do arquivo";

cout<<"\n 2 - Salvar dados no arquivo";

cout<<"\n 3 - Adicionar funcionário (Engenheiro ou Programador)";

cout<<"\n 4 - Listar todos os funcionários";

cout<<"\n 5 - Listar funcionários por salário";

cout<<"\n 6 - Listar funcionários por função (Engenheiro ou Programador)";

cout<<"\n 7 - Sair do programa";

cout<<"\n Enter selection: ";
}
while(escolha(employ)!=1);
}

void printBySalary(const vector<Employee*> &employ){
    vector<Employee*> tempo;
    for(int i=0; i<employ.size();i++)
    {
        tempo.push_back(employ[i]);
    }
    sort(tempo.begin(), tempo.end(), minhaFuncao);  
    print(tempo);
    tempo.clear();
}

int main()
{
    vector<Employee*> employ;
    
    menu(employ);
    /*
    Employee *temp;                 //CRIAÇÃO DE FUNCIONARIOS
    temp = new Engineer("biruta alucinado", 15.0, "05/05/03", "computação");
    employ.push_back(temp);
    temp = new Developer("batata voadora", 17.00, "07/05/2008", "ruby");
    employ.push_back(temp);
    temp = new Engineer("barco adoidado", 10.0, "05/05/2003", "civil");
    employ.push_back(temp);
    temp = new Developer("boliche ilusório", 75.00, "09/01/2008", "java");
    employ.push_back(temp);
    temp = new Engineer("barata assassina", 30.0, "05/05/2003", "prod");
    employ.push_back(temp);
    temp = new Developer("bocó alheio", 17.50, "02/03/2057", "C++");
    employ.push_back(temp);
    //print(employ);
    //cout << endl << endl << endl << endl;
    sort(employ.begin(), employ.end(), minhaFuncao);        //ordenação por salário
    print(employ);
    cout << endl << endl;
                                    //Exportar para arquivo

    saving(employ);
    /*
    ofstream myFile;
    myFile.open("exempro.dat");
    for (auto it=employ.begin(); it != employ.end(); it++)
    {
 
        myFile<< employ[i]->type() <<endl;
        myFile<< employ[i]->getName() <<endl;
        myFile<< employ[i]->getSalary() <<endl;
        myFile<< employ[i]->getDate() <<endl;
        
       if(employ[i]->type()=="dev"){
            myFile<< employ[i]->getLanguage() <<endl;
        }
        else{
            myFile<< employ[i]->getFormation() <<endl;
        }
        i++;
    }
    myFile.close();
    */
    return 0;
    
}