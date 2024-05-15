// NAME: Trixie Nicole Organiza BSCS 1
// SUBJECT: CMSC 28 - OOP
// A program that displays the employee's information
#include <iostream>

using namespace std;

class Employee {
private:
    string name;
    int employeeId;
    double salary;
public:
    Employee(string employeeName, int empId, double employeeSalary) {
        name = employeeName;
        employeeId = empId;
        salary = employeeSalary;
    }

    void view() {
        cout << "Employee name: " << name << endl;
        cout << "Employee ID: " << employeeId << endl;
        cout << "Employee Salary: " << salary << endl;
    }
};

int main() {
    Employee intern1("Trixie", 100191, 35000.5);
    intern1.view();

    return 0;
}
