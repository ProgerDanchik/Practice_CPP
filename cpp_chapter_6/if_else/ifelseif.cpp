//ifelseif.cpp -- использование оператора if else if else
#include <iostream>
const int Fave = 27;

int main() {
	using namespace std;

	int n;
	
	cout << "Enter a number in the range 1-100 to find ";
	cout << " my favorite number: "; //запрос на ввод числа из диапазона 1-100
	do {
		cin >> n;

		if (n < Fave) {
			cout << "Too low -- guess again: ";		// Число слишком мало
		} else if (n > Fave) {
			cout << "Too high -- guess again: ";	// Число слишком велико
		}
		else {
			cout << Fave << " is right!\n";
		}
	} while (n != Fave);

	return 0;
}	
