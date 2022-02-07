#include <iostream>
using namespace std;

void convert(double f) {
	cout << "Distance in yards - " << f * 220 << endl;
	cout << "Distance in meters - " << f * 201168 << endl;
}

int main() {
	double furlong;

	cout << "Enter furlong value: ";
	cin >> furlong;

	convert(furlong);

	return 0;
}
