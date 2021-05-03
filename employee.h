#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
#include <iostream>

using namespace std;

class Employee{
private:
    string name;
    float salary;
    string date;

public:
    //contrutor
    Employee();
    //construtor overload
    Employee (string name, float salary, string date);
    //destrutor
    ~Employee();
    
    //funções
    virtual void print();

    void setName(string name);
    string getName() const;

    void setSalary(float s);
    float getSalary();    

    void setDate(string s);
    string getDate() const;

    virtual void setLanguage(string linguagem);
    virtual void setFormation(string formation);
    virtual string getLanguage();
    virtual string getFormation();
    virtual string type();
};
#endif // EMPLOYEE_H
