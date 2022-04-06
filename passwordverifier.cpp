/*
File name:  passwordverifier.cpp 
Author:     Felipe Rodas
Date:       04/06/2022
Purpose:    verify a password
*/

#include <iostream>
#include <cctype>

using namespace std;

void checkPassword(char[], int);
bool checkLenght(char[]);
bool checkUpperCase(char[]);
bool checkLowerCase(char[]);
bool checkDigit(char[]);

int main () {
    const int MAX_SIZE = 80;
    char password[MAX_SIZE];

    cout << "Password Requirements" << 
    endl << " -The password should be at least 6 characters long" <<
    endl << " -The password should contain at least one uppercase and at least one lowercase letter." <<
    endl << " -The password should have at least one digit." << endl;

    checkPassword(password, MAX_SIZE);

    return 0;
}

void checkPassword(char password[], int size){
    cout << "Enter a password: ";
    cin.getline(password, size);

    if(!checkLenght(password)){
        cout << "password is invalid." << 
        endl << "password should be at least 6 characters long." << endl;
        checkPassword(password, size);
    }

    if(!checkUpperCase(password)){
        cout << "password is invalid." << 
        endl << "It should contain at least one uppercase letter." << endl;
        checkPassword(password, size);
    }
    if(!checkLowerCase(password)){
        cout << "password is invalid." << 
        endl << "It should contain at least one lowercase letter." << endl;
        checkPassword(password, size);
    }
    if(!checkDigit(password)){
        cout << "password is invalid." << 
        endl << "It should have at least one digit." << endl;
        checkPassword(password, size);
    }
    cout << "password is valid.";
    return;
}

bool checkLenght(char password[]){
    int i = 0;
    while(password[i] != '\0'){
        i++;
    }

    if(i >= 6 ) return true; else return false;
}

bool checkUpperCase(char password[]) {
    int i = 0;
    while(password[i] != '\0'){
        if(isupper(password[i])) return true;
        i++;
    }
    return false;
}

bool checkLowerCase(char password[]){
    int i = 0;
    while(password[i] != '\0'){
        if(islower(password[i])) return true;
        i++;
    }
    return false;
}
bool checkDigit(char password[]){
    int i = 0;
    while(password[i] != '\0'){
        if(isdigit(password[i])) return true;
        i++;
    }
    return false;
}