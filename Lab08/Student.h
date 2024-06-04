#include <iostream>
#include "Person.h"
using namespace std;


class Student : public Person {
    private:
        string studentNum;
    public:
        string Course;
        string Department;
        string College;

        // Constructor
        Student() {}

        // SETTER
        void setStudentNum(string num) {
            studentNum = num;
        }
        void setCourse(string course) {
            Course = course;
        }

        void setDepartment(string department) {
            Department = department;
        }

        void setCollege(string college) {
            College = college;
        }

        // GETTER 
        string getStudentNum() {
            return studentNum;
        }

        string getCourse() {
            return Course;
        }

        string getDepartment() {
            return Department;
        }

        string getCollege() {
            return College;
        }
};

