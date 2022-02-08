/*
	A program that asks for the number of miles driven 
	and gallons of gasoline consumed and then reports the miles per gallon.
*/
#include <iostream>

int main() {
	using namespace std;

	double miles, gallons, mpg, lpk;

	const double lpg{ 3.785 };
	const double kmpm{ 1.609 };

	cout << "Enter the number of miles traveled: ";
	cin >> miles;
	cout << "Enter the number of gallons used: ";
	cin >> gallons;

	mpg = miles / gallons;
	lpk = (100 * lpg) / (mpg * kmpm);

	cout << "Fuel consumption (miles per gallon) = " << mpg << endl;
	cout << "Fuel consumption (liters per 100 kilometers) = " << lpk << endl;

	return 0;
}
