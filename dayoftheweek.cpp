/*
File name:  dayoftheweek.cpp 
Author:     Felipe Rodas
Date:       02/06/2022
Purpose:    Return the day of the week, give day of the month, month, and year
*/

// added requested features and removed arrays

#include <iostream>
#include <string>
#include <sstream>
#include <limits>
#include <vector>
using namespace std;
using std::string; using std::vector;
using std::cout; using std::endl;
using std::cin; using std::numeric_limits;

int main(){
    int year;
    int m;
    int q;

    while(true){
        cout << "enter a year (e.g., 2021): ";
        if(cin >> year){
            break;
        } else {
            cout << "invalid input\n";
            cin.clear();
            cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
        }
    }

    while(true){
        cout << "enter a month (e.g., 1-12): ";
        if(cin >> m){
            if(m > 0 && m < 13){
                break;
            } else {
                cout << "invalid month\n";
                cin.clear();
                cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
            }
        } else {
            cout << "invalid input\n";
            cin.clear();
            cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
        }
    }

    while(true){
        cout << "enter a day of the month (e.g., 1-31): ";
        if(cin >> q){
            if(q > 0 && q < 32){
                break;
            } else{
                cout << "invalid day\n";
                cin.clear();
                cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
            }
        } else {
            cout << "invalid input\n";
            cin.clear();
            cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
        }
    }
    
    if(m == 1) {
        m = 13;
        year--;
    }
    if(m == 2) {
        m = 14;
        year--;
    }
    // • m is the month (3: March, 4: April, …, 12: December). January and February are counted as
    // months 13 and 14 of the previous year.

    // • q is the day of the month.

    int j = year / 100;
    int k = year % 100;
    // • j is the century (i.e. year / 100).
    // • k is the year of the century (i.e., year % 100).


    int h = (q + 13 * (m + 1) / 5 + k + k / 4 + j / 4 + 5 * j) % 7;
    string day;

    switch(h){
        case 0:
        day = "Saturday";
        break;
        case 1:
        day = "Sunday";
        break;
        case 2:
        day = "Monday";
        break;
        case 3:
        day = "Tuesday";
        break;
        case 4:
        day = "Wednesday";
        break;
        case 5:
        day = "Thursday";
        break;
        case 6:
        day = "Friday";
        break;
        default:
            cout << "ERROR: day number does not map to reality";
        break;
    }

    cout << "the day is " << day;
    cin;

    return 0;
}
