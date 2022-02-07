#include <iostream>
using namespace std;

double convertCelToFahr(double c) {
	return 1.8 * c + 32;
}

int main() {
	double cel;

	cout << "Please enter a Celsius value: ";
	cin >> cel;

	cout << cel << " degrees Celsius is " << convertCelToFahr(cel) << " degrees Fahrenheit." << endl;

	return 0;
}
