#include <iostream>
// #include <string>
#include <cctype>

using namespace std;

bool checkPassword(char[]);
bool checkLenght(char[]);
bool checkUpperCase(char[]);
bool checkLowerCase(char[]);
bool checkDigit(char[]);

int main () {
    char password[4];
    cout << "Password Requirements" << 
    endl << " -The password should be at least 6 characters long" <<
    endl << " -The password should contain at least one uppercase and at least one lowercase letter." <<
    endl << " -The password should have at least one digit." << 
    
    endl << "Enter a password: ";

    checkPassword(password);

    return 0;
}

bool checkPassword(char password){
    if()
}