#ifndef DEVELOPER_H
#define DEVELOPER_H

#include "employee.h"
#include <iostream>
#include <string>

using namespace std;

class Developer: public Employee
{
private:
    string linguagem;

public:
    Developer();
    ~Developer();
    Developer( string name, float salary, string date, string linguagem);
    void print();
    void setLanguage(string linguagem);

    string getFormation();
    string getLanguage();
    string type();
};
#endif // DEVELOPER_H