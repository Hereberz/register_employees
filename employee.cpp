#include "employee.h"
#include <string>
#include <iostream>
using namespace std;

Employee::Employee()
{
    /*
    string name;
    float salary;
    string date;
    cout<< "\nInsira o nome do usuário: ";
        cin.ignore();
        getline(cin, name);
        setName(name);
    cout<< "Insira o salário do usuário: ";   
        cin>> salary;
        setSalary(salary);
    cout<< "Insira a data de admissão do usuário: ";   
        cin>> date;
        setDate(date);
    */
    printf("Funcionario::Construtor default executado!\n");
}

Employee::~Employee()
{
    cout << "\nFuncionário " << getName() << "encerrado.\n";
}

Employee::Employee( string name, float salary, string date)
{
    setName(name);
    setSalary(salary);
    setDate(date);
}

void Employee::print()                          //PRINT
{
    cout << "\nNome: " << getName() << endl;
    

    cout << "Salário: " << getSalary() << endl;
    

    cout << "Data de admissão: " << getDate() << endl;
}



void Employee::setName(string name){             //SETTERS
    this->name = name; 
}

void Employee::setSalary(float s){
    salary = s; 
}

void Employee::setDate(string date){
    this->date = date; 
}

                                                //GETTERS
string Employee::getName () const{
    return name;
}

float Employee::getSalary(){
    return salary;
}

string Employee::getDate () const{
    return date;
}

string Employee::type()
{
    return NULL;
}

string Employee::getLanguage(){
    return NULL;
}

string Employee::getFormation(){
    return NULL;
}
void Employee::setLanguage(string linguagem){
}

void Employee::setFormation(string formation){
}