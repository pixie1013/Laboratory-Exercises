#include <iostream>
#include <string>
#include "Person.h"
using namespace std;

class Employee : public Person {
    private:
        int empNum; // Employee Number

    public:
        string Position;
        string OfficeUnit;
        double Salary;

        Employee() {}

        // SETTER METHODS ----------------------------------
        void setEmpNum(int num) {
            empNum = num;
        }

        void setSalary(double salary) {
            Salary = salary;
        }       

        void setPosition(string position) {
            Position = position;
        }

        void setOfficeUnit(string officeUnit) {
            OfficeUnit = officeUnit;
        }

        //GETTER METHODS -----------------------------------
        string getPosition() {
            return Position;
        }

        int getEmpNum() {
            return empNum;
        }
        
        string getOfficeUnit() {
            return OfficeUnit;
        }

        double getSalary() {
            return Salary;
        }
};
