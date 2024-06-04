#include<iostream>
using namespace std;

class Movie
{
private:
    string title;
    string synopsis;
    string mpaa_rating;
    string genre;
    Person* director;
    Person* actor;
    int numDirectors;
    int numActors;
public:
    // Constructor
    Movie(string newTitle, string newSynopsis, string newMPAARating, string newGenre,Person* newDirectors, int NumDirs, Person *newActors, int numActs) {
        title = newTitle;
        synopsis = newSynopsis;
        mpaa_rating = newMPAARating;
        genre = newGenre;
        director = newDirectors;
        actor = newActors;
        numActors = numActs;
    }

    // Getter methods
    string getTitle() { return title; }
    string getSynopsis() { return synopsis; }
    string getMpaaRating() { return mpaa_rating; }
    string getGenre() { return genre; }
    Person* getDirector() { return director; }
    Person* getActor() { return actor; }

    // Setter methods
    void setTitle(string newtitle) { title = newtitle; }
    void setSynopsis(string newsynopsis) { synopsis = newsynopsis; }
    void setMpaaRating(string newrating) { mpaa_rating = newrating; }
    void setGenre(string newgenre) { genre = newgenre; }
    void setDirector(Person* newdirector, int numDirs) { 
        director = newdirector;
        numDirectors = numDirs; 
    }
    void setActor(Person* newactor, int numActs) { 
        actor = newactor; 
        numActors = numActs;
    }
};
