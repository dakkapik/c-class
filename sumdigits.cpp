/*
File name:  sumdigits.cpp 
Author:     Felipe Rodas
Date:       01/30/2022
Purpose:    Sum the digits of an integer
*/

#include <iostream>
using namespace std;

int main(){
    int number; 
    cout << "Enter an integer between 0 and 1000 \n";
    cin >> number; 

    int sum = number % 10;
    int nextNumber = number / 10;

    do {
        sum += nextNumber % 10;
        nextNumber = nextNumber / 10;
    } while (nextNumber != 0);

    cout << "sum of all digits is: " << sum;

    return 0;
}

