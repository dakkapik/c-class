/*
    File name:  searchBenchmarks.cpp
    Author:     Felipe Rodas
    Date:       02/23/2022
    Purpose:    create a text document with random numbers, read the numbers, sort the number, and then perform a binary search to find a target number
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
    int result;

    int target = 101;


    generateNumberFile(FILE_NAME, NUMBER_LIST_LENGTH);

    readFileInto(FILE_NAME, numArray, NUMBER_LIST_LENGTH);

    selectionSort(numArray, sortedArray, NUMBER_LIST_LENGTH);

    cout << "random number array generated and sorted" << endl;
    while(target > 100 || target < 0){
        cout << "enter number to find:";
        cin >> target;
        if(target > 100 || target < 0) cout << "invalid number"<< endl;
    }

    result = binarySearch(sortedArray, NUMBER_LIST_LENGTH, target);
    
    if(result != -1){
        cout << "number position found at: " << result;
    } else {
        cout << "search failed";
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
    int count = 0;
    bool found = false;


    while (!found && count < length / 2){
        count ++;
        if(array[midPoint] == target) {
            cout << "For binary search, number of comparisons: " << count << endl;
            found = true;
            return midPoint;
        }
        if(target > array[midPoint]){
            lowPoint = midPoint + 1;
            midPoint = (highPoint - lowPoint) / 2 + lowPoint;
        }
        if(target < array[midPoint]){
            highPoint = midPoint - 1;
            midPoint = (highPoint - lowPoint) / 2 + lowPoint;
        }
    }

    cout << "For binary search, number of comparisons: " << count << endl;
    return -1;
}