#pragma once

#include <string>
using namespace std;


class Employee
{
    public:
    Employee();
    Employee(string id, string name, string surname, string departmentId, string position);

    string GetId() const;
    void SetId(string);
    string GetName() const;
    void SetName(string);
    string GetSurname() const;
    void SetSurname(string);
    string GetDepartmentId() const;
    void SetDepartmentId(string);
    string GetPosition() const;
    void SetPosition(string);

    private:
    string id;
    string name;
    string surname;
    string departmentId;
    string position;

};
