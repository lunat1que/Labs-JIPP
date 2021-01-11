#pragma once
using namespace std;


#include <iostream>
#include <vector>
#include <map>
#include "employee.hpp"

class HRMS
{
    public:
   
    void add(Employee employee, string str, double salary);
    void printDepartment(string departmentId);
    void changeSalary(string employeeId, double salary);
    void printSalaries();
    void printSalariesSorted();


    private:

    vector<Employee> employees;
    multimap<string, string> departmentEmployee;
    map<string, double> salaries;

};
