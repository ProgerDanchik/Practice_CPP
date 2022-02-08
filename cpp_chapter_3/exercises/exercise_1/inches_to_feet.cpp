// Software to convert inches to feet and inches
#include <iostream>

int main() {
	using namespace std;

	double inches, feet;
	const int coefficient = 12;

	cout << "Enter a value of inches:___\b\b\b";
	cin >> inches;

	feet = inches / coefficient;
	int remain = int(inches) % 12;
	cout << "Feet = " << feet << ", inches = "
		<< remain << endl;

	return 0;
}
