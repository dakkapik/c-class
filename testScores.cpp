/*
File name:  testScores.cpp 
Author:     Felipe Rodas
Date:       03/24/2022
Purpose:    Create a dinamic array, for grades, sort the grades and get an average using 2 functions
*/

#include <iostream>

using namespace std;

void sort(double*, int);
double average(double*, int);

int main () {
    double *grades = nullptr, currentGrade, averageGrade; 
    int gradesLength;
    do {
        cout << "how many test scores will you enter? ";
        cin >> gradesLength;
        if(gradesLength < 0) cout << "invalid: number must be greater than 0 \n try again... \n";
    } while (gradesLength < 0);

    grades = new double[gradesLength];
    
    for ( int i = 0; i < gradesLength; i++ ) {
        cout << "enter score " << (i + 1) << ":";
        do {
            cin >> currentGrade;
            if (currentGrade < 0) cout << "Negative scores are not allowed\nEnter another score for this test (" << (i + 1) << "):";
        } while (currentGrade <= 0);
        *(grades + i) = currentGrade;
    }

    sort(grades, gradesLength);
    averageGrade = average(grades, gradesLength);

    cout << "\nThe test scores in ascending order, and their average, are:\n\nScore\n-----\n";
    for(int i = 0; i < gradesLength; i++ ) {
        cout << *(grades + i) << endl;
    }
    cout << "\nAverage score: " << averageGrade;

    return 0;
}

void sort (double *grades, int length) {
    double *tempGrades = nullptr, largest = 0;
    int largestIndex, smallestIndex; 

    tempGrades = new double[length];

    for(int i = 0; i < length; i++) {
        if(largest < *(grades + i)) {
            largest = *(grades + i);
            largestIndex = i;
        }
    }

    smallestIndex = largestIndex;

    for(int i = 0; i < length; i++) {
        for(int j = 0; j < length; j++) {
            if(*(grades + smallestIndex) > *(grades + j)) smallestIndex = j;
        }
        *(tempGrades + i) = *(grades + smallestIndex);
        *(grades + smallestIndex) = largest + 1;
        smallestIndex = largestIndex;
    }

    for(int i = 0; i < length; i++ ){
        *(grades + i) = *(tempGrades + i);
    }

    delete tempGrades;
    return;
}
 
double average (double *grades, int length){
    double totalSum = 0;
    for(int i = 0; i < length; i ++){
        totalSum += *(grades + i);
    }
    return (totalSum / length); 
}
