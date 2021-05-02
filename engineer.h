#ifndef ENGINEER_H
#define ENGINEER_H

#include "employee.h"
#include <iostream>
#include <string>

using namespace std;

class Engineer: public Employee
{
protected:
    string formation;

public:
    Engineer();
    ~Engineer();
    Engineer(string name, float salary, string date, string formation);
    void print();
    void setFormation(string formation);
    string getFormation();
    string type();
};
#endif // ENGINEER_H