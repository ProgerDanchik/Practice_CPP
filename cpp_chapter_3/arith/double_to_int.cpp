#include <iostream>

int main() {
	using namespace std;
	
	double x1, x2;

	cout << "Enter a first number: ";
	cin >> x1;

	cout << "Enter a second number: ";
	cin >> x2;

	int x = int(x1) + int(x2);

	cout << "Convert to int result = " << x << endl;

	return 0;

}
