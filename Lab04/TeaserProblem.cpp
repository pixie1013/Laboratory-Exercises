// This program determines the highest and lowest value among the three different values
// Written by Trixie Nicole Organiza

#include <iostream>
using namespace std;

// Function declarations
void progdescription();
void readdata(int& num1, int& num2, int& num3); 
int getsmall(int num1, int num2, int num3);
void showdata(int num1, int num2, int num3, int largeval, int smallval, int diff);
int getlarge(int num1, int num2, int num3);

int main() {
    int x, y, z;

    progdescription();

    readdata(x, y, z);

    int smallval = getsmall(x, y, z);
    int largeval = getlarge(x, y, z);
    int diff = largeval - smallval;

    showdata(x, y, z, largeval, smallval, diff);

    return 0;
}

// Display title
void progdescription() {
	cout << "\n\t\t----------------------------------------------------------";
    cout << "\n\t\tThis program will find the highest and lowest number";
    cout << "\n\t\tProgrammer: TRIXIE NICOLE ORGANIZA";
    cout << "\n\t\tDate: APRIL 27";
    cout << "\n\t\tSubject: CMSC 28";
    cout << "\n\t\t----------------------------------------------------------";
}

// Input data
void readdata(int& num1, int& num2, int& num3) {
    cout << "\n\t\tEnter value for first number: ";
    cin >> num1;
    cout << "\t\tEnter value for second number: ";
    cin >> num2;
    cout << "\t\tEnter value for third number: ";
    cin >> num3;
}

// Determines the largest value
int getlarge(int num1, int num2, int num3) {
    if (num1 >= num2 && num1 >= num3)
        return num1;
    else if (num2 >= num1 && num2 >= num3)
        return num2;
    else
        return num3;
}

// Determines the smallest value
int getsmall(int num1, int num2, int num3) {
    if (num1 <= num2 && num1 <= num3)
        return num1;    
    else if (num2 <= num1 && num2 <= num3)
        return num2;
    else
        return num3;
}

// Informs the user about the input, maximum and minimum values, and the difference
void showdata(int num1, int num2, int num3, int largeval, int smallval, int diff) {
    cout << "\n\t\tThe values of:";
    cout << "\n\t\tNUM 1: " << num1;
    cout << "\n\t\tNUM 2: " << num2;
    cout << "\n\t\tNUM 3: " << num3;
    cout << "\n\t\tLARGEST VALUE: " << largeval;
    cout << "\n\t\tSMALLEST VALUE: " << smallval;
    cout << "\n\t\tDIFFERENCE VALUE: " << diff;
}
