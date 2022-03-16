/*
    File name:  locateTheLargestElement.cpp
    Author:     Felipe Rodas
    Date:       02/16/2022
    Purpose:   	Finds the largest element on a array and displays it to the user
*/

#include <iostream>


using namespace std;

const int WIDTH = 4;
const int HEIGHT = 3;

void locateLargest(const double a[][4], int location[]);

int main()
{
    double matrix[HEIGHT][WIDTH];
    int position[2];

    cout << "enter 3 arrays of 4 elements separated by spaces" << endl;

    for(int i = 0; i < HEIGHT; i++){
        cout << "enter the array " << i << ": " << endl;
        cin >> matrix[i][0] >> matrix[i][1] >> matrix[i][2] >>  matrix[i][3];
    }

    locateLargest(matrix, position);
}

void locateLargest(const double a[][4], int location[]){
    int largest = 0;
    for(int i = 0; i < HEIGHT; i++){
        for(int j = 0; j < WIDTH; j++){
            if(largest < a[i][j]){
                largest = a[i][j];
                location[0] = i;
                location[1] = j;
            }
        }
    }
    cout << "The location of the largest element is at: (" << location[0] << ", " << location[1] << ")" << endl;
}