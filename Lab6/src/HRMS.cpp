#include <iostream>
#include <random>
#include "employee.hpp"
#include "HRMS.hpp"
using namespace std;



int main(int argc, char *argv[])

{
	cout <<"Vadym Kochenko Lab6"<<endl<<endl;


    Employee emp1("1", "Goscislaw", "Rudek", "D1", "Chief Technology Officer");
    Employee emp2("2", "Anton", "Kulczyk", "D2", "Account manager");
    Employee emp3("3", "Pawel", "Borecki", "D1", "Senior Back-End Developer");
    Employee emp4("4", "Kamil", "Glodek", "D3", "C++ developer");
    Employee emp5("5", "Roksana", "Misiaszek", "D3", "Embedded developer");
    Employee emp6("6", "Olga", "Marciniak", "D2", "QA Automation Engineer");
    Employee emp7("7", "Tamara", "Byk", "D1", "MSSQL DBA Administrator");
    Employee emp8("8", "Ruta", "Zabawa", "D3", "Front End Developer");
    Employee emp9("9", "Lucjan", "Kolodziej", "D2", "Middle data analyst");
    Employee emp10("10", "Lech", "Witek", "D1", "Lawyer");

    HRMS hrms;
    hrms.add(emp1, emp1.GetDepartmentId(), 4000);
    hrms.add(emp2, emp2.GetDepartmentId(), 5060);
    hrms.add(emp3, emp3.GetDepartmentId(), 4240);
    hrms.add(emp4, emp4.GetDepartmentId(), 2900);
    hrms.add(emp5, emp5.GetDepartmentId(), 3020);
    hrms.add(emp6, emp6.GetDepartmentId(), 8040);
    hrms.add(emp7, emp7.GetDepartmentId(), 9090);
    hrms.add(emp8, emp8.GetDepartmentId(), 9990);
    hrms.add(emp9, emp9.GetDepartmentId(), 2898);
    hrms.add(emp10, emp10.GetDepartmentId(), 7540);

    cout << "printDepartment(\"D1\")" << endl;
    hrms.printDepartment("D1");
    cout << "printDepartment(\"D3\")" << endl;
    hrms.printDepartment("D3");
    cout  << "printSalaries()" << endl;
    hrms.printSalaries();
    cout << "changeSalary(emp1.GetId(), 10000)" << endl;
    hrms.changeSalary(emp1.GetId(), 10000);
    cout << "printSalaries()" << endl;
    hrms.printSalaries();

    cout << "printSalariesSorted()" << endl;
    hrms.printSalariesSorted();

    return 0;
}
