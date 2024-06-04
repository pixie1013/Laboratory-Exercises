#include <iostream>
#include "Employees.h"
using namespace std;

int main() {
    // Create an Employee object
    Employee employee;

    // User input for Person attributes
    string firstName;
    string lastName;

    // User input for Employee
    int empNum;
    string position;
    string officeUnit;
    double salary;

    cout << "Sample program user interaction (TestStudent):" << endl;
    cout << "This program will inform the user that they were hired." << endl;
    cout << "Programmer by : Trixie Nicole Organiza" << endl;

    cout << "-----------------------------------------------------" << endl;
    cout << "Enter first name: ";
    cin >> firstName;
    employee.setFirstName(firstName);

    cout << "Enter last name: ";
    cin >> lastName;
    employee.setLastName(lastName);

    cout << "Enter employee number: ";
    cin >> empNum;
    employee.setEmpNum(empNum);

    cout << "Enter position: ";
    cin.ignore(); 
    getline(cin, position);
    employee.setPosition(position);

    cout << "Enter office/unit: ";
    getline(cin, officeUnit);
    employee.setOfficeUnit(officeUnit);

    cout << "Enter salary: ";
    cin >> salary;
    employee.setSalary(salary);
    cout << "-----------------------------------------------------" << endl;

    // Display the values
    cout << "\nHi, " << employee.getFirstName() << " " << employee.getLastName() << "! " <<
    "Welcome to Ingenuity and congratulations! " << endl << endl << "We are pleased to inform you that you have been hired as the " 
    << employee.getPosition() << " under the " << employee.getOfficeUnit() << "," << " with a salary rate of " << employee.getSalary() << ".";

    cout << "\n\tEMPLOYEE PROFILE" << endl;
    cout << "\tNAME: " << employee.getFirstName() << " " << employee.getLastName() << endl;
	cout << "\tGENDER: " << employee.getGender() << endl;
	cout << "\tPHONE NUMBER: " << employee.getCpNumber() << endl;

    return 0;
}

