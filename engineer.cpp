#include "engineer.h"
#include <string>
#include <iostream>

using namespace std;

Engineer::Engineer()
{
    string formation;
    cout<< "\nInsira a formação do engenheiro: ";
    cin>>formation;
    setFormation(formation);
    printf("\nEngineer::Construtor default executado!\n");
    char lixo;
    scanf("%c",&lixo);
}

Engineer::~Engineer()
{
    cout << "\n Funcionário " << getName() << " encerrado.";
}

Engineer::Engineer(string name, float salary, string date, string formation) : Employee(name, salary, date)
{
    setFormation(formation);
    cout<< "\nConstrutor de engenheiro executado.\n";
}

void Engineer::print()                          //print
{
    Employee::print();
    cout << "Formação do engenheiro: "<< getFormation()<< endl;
}

void Engineer::setFormation(string formation)             //getters and setters
{
    this->formation = formation; 
}

string Engineer::getFormation()
{
    return formation;
}
string Engineer::type()
{
    return "eng";
}
