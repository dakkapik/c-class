#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int answer;
	
	while (true) {
		cout << "Welcome to THE GLORIOUS MATH TUTOR \n";
		cout << "1. Addition\n";
		cout << "2. Subtraction \n";
		cout << "3. Multiplication \n";
		cout << "4. Division \n";
		cout << "5. Exit \n";
		if (cin >> answer) {
			break;
		}
		else if (answer < 5) {
			cout << "option does not exist";
		}
		else {
			cout << "invalid input";
		}
		
	}

	return 0;
}
