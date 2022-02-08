/*
	A program that asks for gasoline consumption in European
	(number of liters per 1,00 km) and converts it to the U.S. U.S. - number of miles per gallon. 
*/
#include <iostream>

int main() {
	using namespace std;
	const double mile_coef{1.609};
	const double gl_coef{3.875};

	double lp100, mpg;

	cout << "Enter a number lpk: ";
	cin >> lp100;

	mpg = (((100 / lp100) / mile_coef) * gl_coef);

	cout << "MPG = " << mpg << endl;

	return 0;

}
