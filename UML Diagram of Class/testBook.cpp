#include <iostream>
#include "Book.h"

using namespace std;

//FUNCTION DECLARATION
void displayHeader();

int main(){
    string title, author, ISBN, publisher;
    displayHeader();
    cout << "\n\t\t----------------------------------------------------------\n";
    cout << "\t\tEnter the title of the book: ";
    getline(cin, title);
    cout << "\t\tEnter the author of the book: ";
    getline(cin, author);
    cout << "\t\tEnter the ISBN of the book: ";
    getline(cin, ISBN);
    cout << "\t\tEnter the publisher of the book: ";
    getline(cin, publisher);
    cout << "\t\t----------------------------------------------------------\n";

    // Access and print the book's information
    Book myBook(title, author, ISBN, publisher);
    cout << "\n\t\t----------------------------------------------------------";
    cout << endl << "\t\tBOOK INFORMATION" << endl;
    cout << "\t\tTitle: " << myBook.getTitle() << endl;
    cout << "\t\tAuthor: " << myBook.getAuthor() << endl;
    cout << "\t\tISBN: " << myBook.getISBN() << endl;
    cout << "\t\tPublisher: " << myBook.getPublisher() << endl;
    cout << "\t\t----------------------------------------------------------";

    return 0;
}

// Displays program description
void displayHeader(){
    cout << "\n\t\t----------------------------------------------------------";
    cout << "\n\t\tThis program allows you to input book information.";
    cout << "\n\t\tProgrammer: TRIXIE NICOLE ORGANIZA";
    cout << "\n\t\tDate: MAY 10, 2024";
    cout << "\n\t\tSubject: CMSC 28";
    cout << "\n\t\t----------------------------------------------------------";
}
