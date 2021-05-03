#ifndef FUNCTION_H
#define FUNCTION_H

#include "employee.h"
#include <vector>
#include <iostream>
using namespace std;


void menu(vector<Employee*> &employ);
int escolha(vector<Employee*> &employ);

void print(const vector<Employee*> &employ);
void printDev(const vector<Employee*> &employ);
void printEng(const vector<Employee*> &employ);
void printBySalary(const vector<Employee*> &employ);

void saving(const vector<Employee*> &empo);
vector<Employee*> loading();
void add(vector<Employee*> &employ);

bool minhaFuncao(Employee *emp1, Employee *emp2);
bool minhaFuncao2(Employee *emp1, Employee *emp2);
#endif //FUNCTION_H