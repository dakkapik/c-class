/*
File name:  carbuyingapp.cpp 
Author:     Felipe Rodas
Date:       02/19/2022
Purpose:    Given price of car, rebate, credit union rate, deal rate and term,
			use periodic payment formula and return monthly payments for credit 
			union and dealer.
*/

#include <iostream>
#include <math.h>

using namespace std;

double getPayment(int, double, int);

int main()
{
	double	creditUnionRate,
			dealerRate;

	int		term,
			price,
			rebate,
			priceAfterRebate;

	cout << "Car Price: ";
	cin >> price;
	cout << "Rebate : ";
	cin >> rebate;
	cout << "Credit union rate: ";
	cin >> creditUnionRate;
	cout << "Dealer rate: ";
	cin >> dealerRate;
	cout << "Term in years: ";
	cin >> term;

	priceAfterRebate = price - rebate;

	double	dealerPrice = getPayment(price, dealerRate, term),
			creditUnionPrice = getPayment(priceAfterRebate, creditUnionRate, term);
	
	dealerPrice = round( dealerPrice * 100.0 ) / 100.0;
	creditUnionPrice = round( creditUnionPrice * 100.0 ) / 100.0;

	cout << "Credit union monthly payment: $" << creditUnionPrice
		<< "\nDealer monthly payment: $" << dealerPrice;

}

double getPayment(int principal, double rate, int term) {
	return (principal * (rate/12) / (1 - pow(rate/12 + 1, - (term * 12))));
}
