#include <iostream>
#include "Person.h"
#include "Grade.h"
using namespace std;

int main() {
    int a;
    char g;
    Person p;
    string subj;
    int grd;
    Grade grade;

    // Input
    cout << "\nInput age: ";
    cin >> a;
    p.setAge(a);

    cout << "Input gender (M/F): ";
    cin >> g;
    p.setGender(g);

    cout << "Input subject: ";
    cin.ignore(); 
    getline(cin, subj);
    grade.setSubject(subj);
    
    cout << "Input grade: ";
    cin >> grd;
    grade.setGrade(grd); 

    // Display the entered details
    cout << "\nPERSON'S INFORMATION: " << endl;
    cout << "AGE: " << p.getAge() << endl;
    cout << "GENDER: " << p.getGender() << endl;
    cout << "SUBJECT: " << grade.getSubject() << endl;
    grade.getGrade(); 

    return 0;
}
