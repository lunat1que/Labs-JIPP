#include "employee.hpp"
using namespace std;


    Employee::Employee(string _id, string _name, string _surname, string _departmentId, string _position)
    {
        id = _id;
        name = _name;
        surname = _surname;
        departmentId = _departmentId;
        position = _position;
    }

    string Employee::GetId() const {
    return id;
    }

    void  Employee::SetId(string _id) {
    id = _id;
    }

    string Employee::GetName() const {
        return name;
    }

    void Employee::SetName(string _name) {
        name = _name;
    }

    string Employee::GetSurname() const {
        return surname;
    }

    void Employee::SetSurname(string _surname) {
        surname = _surname;
    }

    string Employee::GetDepartmentId() const {
        return departmentId;
    }

    void Employee::SetDepartmentId(string _departmentId) {
        departmentId = _departmentId;
    }

    string Employee::GetPosition() const {
        return position;
    }

    void Employee::SetPosition(string _position) {
        position = _position;
    }
