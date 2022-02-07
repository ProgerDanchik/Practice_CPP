#include <iostream>
using namespace std;

void getTime(int h, int m) {
	cout << "Time: " << h << ":" << m << endl;
}

int main() {
	int hour, min;

	cout << "Enter the number of hours: ";
	cin >> hour;

	cout << "Enter the number of minutes: ";
	cin >> min;

	getTime(hour, min);

	return 0;

}
