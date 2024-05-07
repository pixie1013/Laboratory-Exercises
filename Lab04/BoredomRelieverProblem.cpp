// This program converts decimal values to binary values
// DISCLAIMER: As per instruction, the input is an INTEGER and does not accept float values. 
// Written by Trixie Nicole Organiza

#include <iostream>
#include <stack>

using namespace std;

// FUNCTION DECLARATION
void progdescription();
void readdata(int &decimalVal);
void displayVal(int decimalVal, stack<int> binaryStack);
stack<int> decimalToBinary(int decimalVal);

int main() {
    int decimalVal;

    progdescription();
    readdata(decimalVal);

    stack<int> binaryStack = decimalToBinary(decimalVal);

    displayVal(decimalVal, binaryStack);

    return 0;
}

// Display title
void progdescription() {
    cout << "\n\t\t----------------------------------------------------------";
    cout << "\n\t\tThis program will convert decimal values to binary values.";
    cout << "\n\t\tProgrammer: TRIXIE NICOLE ORGANIZA";
    cout << "\n\t\tDate: APRIL 27";
    cout << "\n\t\tSubject: CMSC 28";
    cout << "\n\t\t----------------------------------------------------------";
}

// Input value
void readdata(int &decimalVal) {
    cout << "\n\t\tInput a decimal value: ";
    cin >> decimalVal;
}

// Displays the value
void displayVal(int decimalVal, stack<int> binaryStack) {
    cout << "\n\t\tDECIMAL VALUE:" << decimalVal;
    cout << "\n\t\tBINARY VALUE: ";
    while (!binaryStack.empty()) {
        cout << binaryStack.top();
        binaryStack.pop();
    }
}

// Converts decimal to binary using stacks
stack<int> decimalToBinary(int decimalVal) {
    stack<int> binaryStack;
    while (decimalVal > 0) {
        binaryStack.push(decimalVal % 2);
        decimalVal = decimalVal / 2;
    }
    return binaryStack;
}
