#include <iostream>
using namespace std;

class Person {
    private:
        string firstName;
        string lastName;
        char gender;

    public:
    	string emailAdd;
        string cpNumber;
        Person() {}

        Person(string fName, string lName, char newGender, string em_addy, string cpNum) {
            firstName = fName;
            lastName = lName;
            gender = newGender;
            emailAdd = em_addy;
            cpNumber = cpNum;
        }

        // SET METHODS
        void setFirstName(string fName) {
            firstName = fName;
        }

        void setLastName(string lName) {
            lastName = lName;
        }

        void setGender(char g) {
            gender = g;
        }

        void setEmailAdd(string em_addy) {
            emailAdd = em_addy;
        }

        void setCpNumber(string cpNum) {
            cpNumber = cpNum;
        }

        // GET METHODS
        string getFirstName() {
            return firstName;
        }

        string getLastName() {
            return lastName;
        }

        char getGender() {
            return gender;
        }

        string getEmailAdd() {
            return emailAdd;
        }

        string getCpNumber() {
            return cpNumber;
        }
};
