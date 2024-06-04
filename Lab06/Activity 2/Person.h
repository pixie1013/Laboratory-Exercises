#include<iostream>
using namespace std;

class Person{
private:
    string firstName;
    string lastName;
    char gender;
public:
    Person(){}
    Person(string fName, string lname, char gndr){
        firstName = fName;
        lastName = lname;
        gender = gndr;
    }

    void setFname(string fName){
        firstName = fName;
    }

    void setLname(string lName){
        lastName = lName;
    }

    void setGender(char gndr){
        gender = gndr;
    }

    string getFname(){
        return firstName;
    }

    string getLname(){
        return lastName;
    }

    char getGender(){
        return gender;
    }
};
