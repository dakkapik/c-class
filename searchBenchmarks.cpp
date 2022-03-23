/*
    File name:  searchBenchmarks.cpp
    Author:     Felipe Rodas
    Date:       02/18/2022
    Purpose:    
*/
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <time.h>
#include <string>

using namespace std;


void generateNumberFile(string, int);
void readFileInto(string, int [], int);
void selectionSort(int[], int[], int);
int binarySearch(int[], int, int);


int main() {
    int const NUMBER_LIST_LENGTH = 100;
    string const FILE_NAME = "numbers.txt";

    int numArray[NUMBER_LIST_LENGTH];
    int sortedArray[NUMBER_LIST_LENGTH];
    
    int target = 101;

    generateNumberFile(FILE_NAME, NUMBER_LIST_LENGTH);

    readFileInto(FILE_NAME, numArray, NUMBER_LIST_LENGTH);

    selectionSort(numArray, sortedArray, NUMBER_LIST_LENGTH);

    cout << "random number array generated and sorted" << endl;
    while(target > 100 || target < 0){
        cout << "enter number to find:" << endl;
        cin >> target;
        if(target > 100 || target < 0) cout << "invalid number"<< endl;
    }

    binarySearch(sortedArray, NUMBER_LIST_LENGTH, target);
    

    for(int i = 0; i < NUMBER_LIST_LENGTH; i++) {
        cout << sortedArray[i] << '/';
    }


    return 0;

}

void generateNumberFile(string name, int length){
    srand(time(NULL));
    ofstream numbersFile;
    numbersFile.open(name);
    for(int i = 0; i < length; i++) {
        numbersFile << rand() % 100 + 1;
        numbersFile << ',';
    }
    numbersFile.close();
    return;
}

void readFileInto(string name, int numArray[], int length ){
    string data;
    string temp_cont;

    ifstream numbersFile (name);
    int iterator = 0;

    if(numbersFile.is_open()){
        getline(numbersFile, data);
        for(int i = 0; i < data.length(); i++){
            if(data[i] == ','){
                numArray[iterator] = stoi(temp_cont);
                temp_cont = "";
                iterator ++;
            } else {
                temp_cont += data[i];
            }

        };
    };
}

void selectionSort ( int numArray[], int sortedArray[], int length ) {
    const int MAX_VALUE = 101;
    int min = MAX_VALUE;
    int minIndex;
    int counter1 = 0;
    int counter2 = 0;
    for(int i = 0; i < length; i++){
        counter1 ++;
        for(int j = 0; j < length; j++){
            counter2++;
            if(numArray[j] < min) {
                min = numArray[j];
                minIndex = j;
            }
        } 
        sortedArray[i] = numArray[minIndex];
        numArray[minIndex] = MAX_VALUE; 
        min = MAX_VALUE;
    }
}

int binarySearch (int array[], int length, int target) {
    int highPoint = length - 1;
    int lowPoint = 0;
    int midPoint = highPoint / 2;
    int result;
    while (result == ){
        if(array[midPoint] == target) {
            cout << "For binary search, number of comparisons: ";
            return midPoint;
        }
        if(target > array[midPoint]){
            lowPoint = midPoint + 1;
            midPoint = (highPoint - lowPoint) / 2 + lowPoint;
        }
        // if(target < array[midPoint]){

        //     lowPoint = midPoint - 1;
        //     midPoint = lowPoint / 2

        // }
    }

}