// This program identifies the min and max value, mean, standard deviation, and variance
// Written by Trixie Nicole Organiza

#include <iostream>
#include <cmath>

using namespace std;

// FUNCTION DECLARATION
void displayHeader();
int getInteger(int number[], int integerCtr);
int getLargest(int number[], int integerCtr);
int getSmallest(int number[], int integerCtr);
void displayResults(int max, int min, float average, float variance, float stddev);
float getStandardDeviation(float variance);
float getVariance(int number[], float average, int integerCtr);
float getAverage(int number[], int integerCtr);

int main() {
    int number[10];

    displayHeader();

    int integerCount = getInteger(number, integerCount);                           // Obtains the integer values and counts the number of elements inside the array

    int largestNum = getLargest(number, integerCount);                             // Finds the largest number among the values
    int smallestNum = getSmallest(number, integerCount);                           // Finds the smallest number among the values

    float average = getAverage(number, integerCount);                              // Provides the mean of the array
    float variance = getVariance(number, average, integerCount);                   // Gives the population variance of the array
    float std_deviation = getStandardDeviation(variance);                          // Gives the population standard deviation of the array

    displayResults(largestNum, smallestNum, average, variance, std_deviation);     // Displays results based from the user input

    return 0;
}

// Displays program description
void displayHeader(){
    cout << "\n\t\t----------------------------------------------------------";
    cout << "\n\t\tThis program will provide the minimum and maximum values, mean,\n " << "\t\tstandard deviation and variance.";
    cout << "\n\t\tProgrammer: TRIXIE NICOLE ORGANIZA";
    cout << "\n\t\tDate: MAY 10, 2024";
    cout << "\n\t\tSubject: CMSC 28";
    cout << "\n\t\t----------------------------------------------------------";
}

// A function meant to input integers
int getInteger(int number[], int integerCtr) {
    cout << endl;
    for (int i = 0; i < 10; i++) {
        cout << "\t\tInput integers (Enter 0 to stop):";
        cin >> number[i];
        if (number[i] == 0)
            break;
        else
            ++integerCtr;
    }
    return integerCtr;
}

// Identifies which value is the largest among all the elements
int getLargest(int number[], int integerCtr) {
    int largestInt = number[0];
    for (int i = 1; i < integerCtr; i++) {
        if (largestInt < number[i]) {
            largestInt = number[i];
        }
    }
    return largestInt;
}

// Identifies which value is the smallest among all the elements
int getSmallest(int number[], int integerCtr) {
    int smallestInteger = number[0];
    for (int i = 1; i < integerCtr; i++) {
        if (number[i] < smallestInteger && number[i] != 0) smallestInteger = number[i];
    }
    return smallestInteger;
}

// Computes the mean of an array
float getAverage(int number[], int integerCtr) {
    int sum = 0;
    for (int i = 0; i < integerCtr; i++) {
        sum += number[i];
    }
    return static_cast<float>(sum) / integerCtr;
}

// Computes the variance of the elements
float getVariance(int number[], float average, int integerCtr) {
    float sumOfSquaredDifferences = 0;

    for (int i = 0; i < integerCtr; i++) {
        if (number[i] != 0) sumOfSquaredDifferences += (number[i] - average) * (number[i] - average);
    }
    return sumOfSquaredDifferences / integerCtr;
}

// Returns the standard deviation value
float getStandardDeviation(float variance) {
    return sqrt(variance);
}

// Displays the results
void displayResults(int max, int min, float average, float variance, float stddev) {
    cout << "\n\t\t----------------------------------------------------------" << endl;
    cout << "\t\tMaximum: " << max << endl;
    cout << "\t\tMinimum: " << min << endl;
    cout << "\t\tAverage: " << average << endl;
    cout << "\t\tStandard Deviation: " << stddev << endl;
    cout << "\t\tVariance: " << variance << endl;
    cout << "\t\t----------------------------------------------------------";
}