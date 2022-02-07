#include <iostream>
using namespace std;

double convertLYearsToAstroUnit(double l) {
	return l * 63240;
}

int main() {
	double l_years;

	cout << "Enter the number of light years: ";
	cin >> l_years;

	cout << l_years << " light years = " << convertLYearsToAstroUnit(l_years) << " astronomical units." << endl;

	return 0;
}
