#include "employee.h"
//#include "function.cpp"
#include "engineer.h"
#include "developer.h"

#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;


/*void addEmployee(){
    vector<Employee>& func;

}
void fillList(){
    
}*/
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
bool minhaFuncao (Employee *emp1, Employee *emp2) {return (emp1->getSalary()<emp2->getSalary());}
int main()
{
    vector<Employee*> employ;

    Employee *temp;
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
    sort(employ.begin(), employ.end(), minhaFuncao);
    print(employ);
    cout << endl << endl << endl << endl;
    ofstream myFile;
    myFile.open("exempro.txt");
    for (auto it=employ.begin(); it != employ.end(); it++;)
    {
        
    }
    return 0;
    
}