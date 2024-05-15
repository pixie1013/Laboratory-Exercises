#include <iostream>
using namespace std;

class Person{
    private:
        int age;
        char gender;
    public:
        Person(){}

        Person(int newAge, char newGender){
            age = newAge;
            gender = newGender;
        }

        void setAge(int newAge) {
            if (newAge >= 0 && newAge <= 100) {
                age = newAge;
            } else {
                cout << "Invalid age! Please enter an age between 0 and 100." << endl;
            }
        }

        void setGender(char g){
            gender = g;
        }

        int getAge(){
            return age;
        }

        char getGender(){
            return gender;
        }
};
