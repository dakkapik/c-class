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
	int i = 0;
	bool hasLower = false;
	bool hasUpper = false;
	bool hasDigit = false;
	cout << "Enter a password: ";
    cin.getline(password, size);

	while (password[i] != '\0') {
		if (isupper(password[i])) hasUpper = true;
		if (islower(password[i])) hasLower = true;
		if (isdigit(password[i])) hasDigit = true;
		i++;
	}
	if (i < 6) {
		cout << "password is invalid." << endl
			<< "password should be at least 6 characters long." << endl;
		return;
	}
	if (!hasLower) {
		cout << "password is invalid." << endl
			<< "It should contain at least one lowercase letter." << endl;
		return;
	}
	if (!hasUpper) {
		cout << "password is invalid." << endl
			<< "It should contain at least one uppercase letter." << endl; 
		return;
	}
	if (!hasDigit) {
		cout << "password is invalid." << endl
			<< "It should have at least one digit." << endl; 
		return;
	}
   
    cout << "password is valid."; return;
}
