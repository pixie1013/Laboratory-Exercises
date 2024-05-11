#ifndef BOOK_H
#define BOOK_H

#include <string>

using namespace std;

class Book{
private:
    string title;
    string author;
    string ISBN;
    string publisher;
public:
    // Constructor
    Book(string title, string author, string isbn, string publisher){
        setTitle(title);
        setAuthor(author);
        setISBN(isbn);
        setPublisher(publisher);
    }

    // Getter methods
    string getTitle(){
        return title;
    }

    string getAuthor(){
        return author;
    }

    string getISBN(){
        return ISBN;
    }

    string getPublisher(){
        return publisher;
    }

    //Setter methods
    void setTitle(string bktitle){
        title = bktitle;
    }

    void setAuthor(string bkauthor){
        author = bkauthor;
    }

    void setISBN(string bkisbn){
        ISBN = bkisbn;
    }

    void setPublisher(string bkpublisher){
        publisher = bkpublisher;
    }
};

#endif


