
#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	/*
	int	seatA = 300,
		seatB = 500,
		seatC = 200;
	*/
	int	seatA,
		seatB,
		seatC;

	do {

		cout << "Enter number of A seats sold: ";
		cin >> seatA;
		if(seatA > 300 || seatA < 0) cout << "error value \n";
	} while (seatA > 300 || seatA < 0);

	do  {

		cout << "Enter number of B seats sold: ";
		cin >> seatB;
		if (seatA > 300 || seatA < 0) cout << "error value \n";
	} while (seatB > 500 && seatB < 0);

	do{

		cout << "Enter number of C seats sold:  ";
		cin >> seatC;
		if (seatA > 300 || seatA < 0) cout << "error value \n";
	} while (seatC > 200 && seatC < 0);
	



}
