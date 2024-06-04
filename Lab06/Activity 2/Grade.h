#include <iostream>
using namespace std;

class Grade{
    private:
        string subject;
        int grade;
    public:
        Grade(){}
        Grade(string newsubj, int newgrd){
            subject = newsubj;
            grade = newgrd;
        }

        void setSubject(string subj){
            subject = subj;
        }

        void setGrade(int grd){
            grade = grd;
        }

        string getSubject(){
            return subject;
        }

        void getGrade(){
            cout << "GRADE: " << grade << endl;
            if (grade >= 60) {
                cout << "REMARKS: Pass" << endl;
            } else {
                cout << "REMARKS: Fail" << endl;
            }
        }
};

