#include <iostream>
#include "Student.h"
#include <limits>
using namespace std;

int main() {
    Student student;

    // User input for Person attributes
    string firstName;
    string lastName;
    char gender;
    string email;
    string cpNum;
    string studentNum;
    string course;
    string department;
    string college;

    cout << "Sample program user interaction (TestStudent):" << endl;
    cout << "This program will inform the user that they were admitted to UP" << endl;
    cout << "Programmer by : Trixie Nicole Organiza" << endl;

    cout << "\nEnter first name: ";
    getline(cin, firstName);
    student.setFirstName(firstName);

    cout << "Enter last name: ";
    getline(cin, lastName);
    student.setLastName(lastName);

    while (true) {
        cout << "Enter gender (M/F): ";
        cin >> gender;
        if (gender == 'M' || gender == 'F' || gender == 'm' || gender == 'f') {
            student.setGender(toupper(gender)); // Convert to uppercase to standardize input
            break;
        } else {
            cout << "Invalid input! Please enter 'M' for Male or 'F' for Female." << endl;
            cin.clear(); // Clear the error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
        }
    }

    cout << "Enter email address: ";
    cin.ignore();
    getline(cin, email);
    student.setEmailAdd(email);

    cout << "Enter cellphone number: ";
    getline(cin, cpNum);
    student.setCpNumber(cpNum);

    cout << "Enter student number: ";
    getline(cin, studentNum);
    student.setStudentNum(studentNum);

    cout << "Enter course: ";
    getline(cin, course);
    student.setCourse(course);

    cout << "Enter department: ";
    getline(cin, department);
    student.setDepartment(department);

    cout << "Enter college: ";
    getline(cin, college);
    student.setCollege(college);
	
    // Display the values
    cout << "------------------------------------------------------------------------------------------------" << endl;
    cout << "Sent to: " << student.getEmailAdd() << endl;
    
	cout << "\nHi, " << student.getFirstName() << " " << student.getLastName() << "! " <<
    "Welcome to UP Mindanao and CONGRATULATIONS!\n\nWe are pleased to inform you that you are admitted in the " 
    << student.getCourse() << " under the " << student.getDepartment() << "," << student.getCollege() 
    << ". Your student number is " <<  student.getStudentNum() << "." << endl;
    
    cout << "\n\tSTUDENT PROFILE" << endl;
    cout << "\tNAME: " << student.getFirstName() << " " << student.getLastName() << endl;
	cout << "\tGENDER: " << student.getGender() << endl;
	cout << "\tPHONE NUMBER: " << student.getCpNumber() << endl;
	cout << "\tCOURSE: " << student.getCourse();
	
    return 0;
}
