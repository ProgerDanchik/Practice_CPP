#include <iostream>

int main() {
	using namespace std;

	double x, count;

	count = 0;

	do {
		cout << "Enter a value for the amount: ";
		cin >> x;
		count += x;
		cout << "The sum of all the numbers: " << count << "\n\n";
	} while (x != 0);

	return 0;
}
