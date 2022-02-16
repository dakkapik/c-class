/*
File name:  mathtutor.cpp; 
Author:     Felipe Rodas
Date:       02/16/2022
Purpose:   	Test the math skills of the user with a menu that leads to addition, substraction, multiplication, and division 
*/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>     
#include <time.h>  

using namespace std;

int main()
{
	int const ADDITION = 1;
	int const SUBSTRACTION = 2;
	int const MULTIPLICATION = 3;
	int const DIVISION = 4;
	int const EXIT = 5;

	int numberX;
	int numberY;
	int select;
	int answer;
	int correctAnswer;

	srand(time(NULL));

	cout << "Welcome to THE GLORIOUS MATH TUTOR \n";
	do {
		numberX = rand() % 10;
		numberY = rand() % 10;
		cout << "MAIN MENU\n";
		cout << "1. Addition\n";
		cout << "2. Subtraction \n";
		cout << "3. Multiplication \n";
		cout << "4. Division \n";
		cout << "5. Exit \n";
		cout << "Enter a choice: \n";

		cin >> select;

		switch (select) {
		case ADDITION :

			correctAnswer = numberX + numberY;

			cout << "what is " << numberX << " + " << numberY << " ?\n";
			cin >> answer; 

			if(answer == correctAnswer){
				cout << "\nthat is right! great work champ!\n";
			} else {
				cout << "\nthat is wrong. The correct answer is " << correctAnswer << "\n";
			}
		break;

		case SUBSTRACTION :
			//checks what number is greater, so we don't get negative numbers
			if(numberX < numberY){
				correctAnswer = numberY - numberX;
				cout << "what is " << numberY << " - " << numberX << " ?\n";
				cin >> answer; 

				if(answer == correctAnswer){
					cout << "\nthat is right! great work champ!\n";
				} else {
					cout << "\nthat is wrong. The correct answer is " << correctAnswer << "\n";
				}
			} else {
				correctAnswer = numberX - numberY;
				cout << "what is " << numberX << " - " << numberY << " ?\n";
				cin >> answer; 

				if(answer == correctAnswer){
					cout << "\nthat is right! great work champ!\n";
				} else {
					cout << "\nthat is wrong. The correct answer is " << correctAnswer << "\n";
				}
			};

		break;
		case MULTIPLICATION :
			correctAnswer = numberX * numberY;

			cout << "what is " << numberX << " X " << numberY << " ?\n";
			cin >> answer; 

			if(answer == correctAnswer){
				cout << "\nthat is right! great work champ!\n";
			} else {
				cout << "\nthat is wrong. The correct answer is " << correctAnswer << "\n";
			}
		break;
		case DIVISION :

			if(numberY == 0) numberY ++;

			correctAnswer = numberX / numberY;

			cout << "what is " << numberX << " / " << numberY << " ?\n";
			cin >> answer; 

			if(answer == correctAnswer){
				cout << "\nthat is right! great work champ!\n";
			} else {
				cout << "\nthat is wrong. The correct answer is " << correctAnswer << "\n";
			}

		break;
		case EXIT :
			return 0;
		break;	
		default:
			cout << "\nERROR: invalid input\n";
			break;
		}

	} while (true);
}
