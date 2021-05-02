#include "developer.h"
#include <string>
#include <iostream>

using namespace std;

Developer::Developer()
{
    string linguagem;
    
    cout<< "\nInsira a linguagem com que o usuário trabalha: ";
    cin>>linguagem;
    setLanguage(linguagem);
    printf("\nDeveloper::Construtor default executado!\n");

    char lixo;
    scanf("%c",&lixo);
}

Developer::~Developer()
{
    cout << "\nFuncionário " << getName() << " encerrado.";
}

Developer::Developer( string name, float salary, string date, string linguagem) : Employee(name, salary, date)
{
    setLanguage(linguagem);
    cout<< "\nConstrutor de desenvolvedor executado.\n";
}

void Developer::print()                          //print
{
    Employee::print();
    cout << "Linguagem de prog: " << getLanguage() << endl;
}

void Developer::setLanguage(string linguagem)             //getters and setters
{
    this->linguagem = linguagem; 
}

string Developer::getLanguage(){
    return linguagem;
}
string Developer::getFormation(){
    return NULL;
}
string Developer::type()
{
    return "dev";
}