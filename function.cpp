#include "employee.h"
#include "engineer.h"
#include "developer.h"

#include <vector>
#include <string>
#include <iostream>
#include <vector>

using namespace std;
void fileSave();

/*
void fileRead(){

}
*/
void fileSave(){
    cout<< "Salvando..."<<endl;
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
}

void addEmployee(){
        Employee p = new;
    }
        break;
    
    default:
        break;
    }

}

void list(){

}

void listByFunction(){

}

void listBySalary(){
    
}
void menuPrint()
{
    char selection;

cout<<"\n Menu";

cout<<"\n========";

cout<<"\n 1 - Carregar dados do arquivo";

cout<<"\n 2 - Salvar dados no arquivo";

cout<<"\n 3 - Adicionar funcionário (Engenheiro ou Programador)";

cout<<"\n 4 - Listar todos os funcionários";

cout<<"\n 5 - Listar funcionários por salário";

cout<<"\n 6 - Listar funcionários por função (Engenheiro ou Programador)";

cout<<"\n 7 - Listar funcionários por salário";

cout<<"\n 0 - Sair do programa";

cout<<"\n Enter selection: ";

// read the input

cin>>selection;

menuSelect(selection);

switch(selection)

{
case '1' :{
    cout<<"\n Carregar dados do arquivo\n";
    fileRead();
    fileSave();
}

break;

case '2' :{cout<<"\n Salvar dados no arquivo";}

break;

case '3' :{cout<<"\n Adicionar funcionário (Engenheiro ou Programador)";}

break;

case '4' :{cout<<"\n Listar todos os funcionários";}
    list();
break;

case '5' :{
    cout<<"\n Listar funcionários por salário\n";
    listBySalary();
}

break;

case '6' :{
    cout<<"\n Listar funcionários por função (Engenheiro ou Programador)";
    listByFunction();
}
break;

case '7' :{cout<<"\n Listar funcionários por salário";}

break;

case '8' :{cout<<"\n Sair do programa";}

break;

default : cout<<"\n Invalid selection";

}

cout<<"\n";

}

void menuSelect(char selection)
{
switch(selection)

{

case '1' :{
    cout<<"\n Carregar dados do arquivo\n";
    fileRead();
    fileSave();
}

break;

case '2' :{cout<<"\n Salvar dados no arquivo";}

break;

case '3' :{cout<<"\n Adicionar funcionário (Engenheiro ou Programador)";}

break;

case '4' :{cout<<"\n Listar todos os funcionários";}

break;

case '5' :{cout<<"\n Listar funcionários por salário";}

break;

case '6' :{cout<<"\n Listar funcionários por função (Engenheiro ou Programador)";}

break;

case '7' :{cout<<"\n Listar funcionários por salário";}

break;

case '8' :{cout<<"\n Sair do programa";}

break;

default : cout<<"\n Invalid selection";

}

cout<<"\n";
}