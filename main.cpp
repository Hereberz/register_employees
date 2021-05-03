#include "employee.h"
#include "function.h"
#include "engineer.h"
#include "developer.h"

#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<Employee*> employ;
    
    menu(employ);
    employ.clear();
    return 0;  
}