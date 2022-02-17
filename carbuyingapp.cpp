#include "pch.h"
#include <iostream>
#include <math.h>

using namespace std;

double getPayment(int, double, int);

int main()
{
	double	creditUnionRate = 0.08/12,
			dealerRate = 0.03/12;

	int		term = 4,
			price = 16000,
			rebate = 3000,
			priceAfterRebate;

	cout << "Car Price: ";
	cin >> price;
	cout << "Rebate : ";
	cin >> rebate;
	cout << "Credit union rate: ";
	cin >> creditUnionRate;
	cout << "Dealer rate:";
	cin >> dealerRate;
	cout << "Term in years:";
	cin >> term;
	
	creditUnionRate = creditUnionRate / 12;
	dealerRate = dealerRate / 12;

	priceAfterRebate = price - rebate;

	double	dealerPrice = getPayment(price, dealerRate, term),
			creditUnionPrice = getPayment(priceAfterRebate, creditUnionRate, term);
	
	cout << "Credit union payment: $" << creditUnionPrice
		<< "\nDealer payment: $" << dealerPrice;

}

double getPayment(int principal, double rate, int term) {
	return (principal * rate / (1 - pow(rate + 1, - (term * 12))));
}
