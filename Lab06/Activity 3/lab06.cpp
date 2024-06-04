#include <iostream>
#include <iterator>
#include <list>
#include <string>
#include "Person.h"
#include "Movie.h"
#include <iomanip> 

using namespace std;

int main(){
    string title, synopsis, mpaa_rating, genre;
    string directorFname, directorLname;
    string actorFname, actorLname;
    char directorGender, actorGender;
    int numOfDirector, numOfActor;

    cout << "Input movie title: ";
    getline(cin, title);
    cout << "Input movie synopsis: ";
    getline(cin, synopsis);
    cout << "Input movie MPAA rating: ";
    getline(cin, mpaa_rating);
    cout << "Input movie genre: ";
    getline(cin, genre);


    cout << "How many director's were involved for this movie? ";
    cin >> numOfDirector;
    cin.ignore();    
    Person* director = new Person[numOfDirector];


    // Iteration loop for director information
    for (int i = 0; i < numOfDirector; i++) {

        cout <<"Input director " << i + 1 << "'s first name: ";
        getline(cin, directorFname);
        cout <<"Input director " << i + 1 << "'s last name: ";
        getline(cin, directorLname);

        bool validGender = false;
        while (!validGender) {
            cout <<"Input director " << i + 1 << "'s gender (m/f): ";
            cin >> directorGender;

            // Check if the input is valid
            if (directorGender == 'm' || directorGender == 'f' || directorGender == 'M' || directorGender == 'F') {
                validGender = true;
            } else {
                cout << "Invalid input! Gender must be 'm' or 'f'." << endl; 
            }
        }
        
        cin.ignore(); 

        director[i] = Person(directorFname, directorLname, directorGender);
        cout << "\n--------------------------------" << endl;
	}
    
    
    cout << "How many actor's were involved for this movie? ";
    cin >> numOfActor;
    Person* actor = new Person[numOfActor]; 
    cin.ignore();
     // Iteration loop for actor information
    for (int i = 0; i < numOfActor; i++) {

        cout <<"Input actor " << i + 1 << "'s first name: ";
        getline(cin, actorFname);
        cout <<"Input actor " << i + 1 << "'s last name: ";
        getline(cin, actorLname);

        bool validGender = false;
        while (!validGender) {
            cout <<"Input actor " << i + 1 << "'s gender (m/f): ";
            cin >> actorGender;

            // Check if the input is valid
            if (actorGender == 'm' || actorGender == 'f' || actorGender == 'M' || actorGender == 'F') {
                validGender = true;
            } else {
                cout << "Invalid input! Gender must be 'm' or 'f'." << endl;
            }
        }
        
        cin.ignore(); 

        actor[i] = Person(actorFname, actorLname, actorGender);
        cout << "\n--------------------------------" << endl;
	}

    Person directorInfo(directorFname, directorLname, directorGender);
    Person actorInfo(actorFname, actorLname, actorGender);
    Movie movie(title, synopsis, mpaa_rating, genre, director, numOfDirector, actor, numOfActor);
    
    // Table format output
    cout << "\nMOVIE INFORMATION" << endl;
    cout << left << setw(15) << "TITLE:" << movie.getTitle() << endl;
    cout << left << setw(15) << "SYNOPSIS:" << movie.getSynopsis() << endl;
    cout << left << setw(15) << "MPAA RATING:" << movie.getMpaaRating() << endl;
    cout << left << setw(15) << "GENRE:" << movie.getGenre() << endl;

    cout << "\nDIRECTORS:" << endl;
    cout << left << setw(15) << "First Name" << setw(15) << "Last Name" << setw(10) << "Gender" << endl;
    cout << string(40, '-') << endl;
    for (int i = 0; i < numOfDirector; i++) {
        cout << left << setw(15) << movie.getDirector()[i].getFname() << setw(15) << movie.getDirector()[i].getLname() << setw(10) << movie.getDirector()[i].getGender() << endl;
    }

    cout << "\nACTORS:" << endl;
    cout << left << setw(15) << "First Name" << setw(15) << "Last Name" << setw(10) << "Gender" << endl;
    cout << string(40, '-') << endl;
    for (int i = 0; i < numOfActor; i++) {
        cout << left << setw(15) << movie.getActor()[i].getFname() << setw(15) << movie.getActor()[i].getLname() << setw(10) << movie.getActor()[i].getGender() << endl;
    }
    return 0;
}
