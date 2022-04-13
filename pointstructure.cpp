/*
File name:  pointstructure.cpp
Author:     Felipe Rodas
Date:       04/13/2022
Purpose:    add coordinates using a point data structure
*/

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

struct Point {
    int x;
    int y;
};

int main() {
    Point p1;
    Point p2;

    cout << "Enter coordinates for p1:";
    cin >> p1.x >> p1.y;

    cout << "Enter coordinates for p2:";
    cin >> p2.x >> p2.y;

    Point p3;
    p3.x = p1.x + p2.x;
    p3.y = p1.y + p2.y;
    cout << "Coordinates of p1 + p2 are: " << p3.x << ", " << p3.y;

    return 0;
}