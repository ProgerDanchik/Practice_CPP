//num_test.cpp -- using the numeric check in the loop
#include <iostream>

int main() {
	using namespace std;

	cout << "Enter the starting countdown value: ";
	int limit;
	cin >> limit;

	int i;
	for (i = limit; i; i--) {
		cout << "i = " << i << endl;
	}

	cout << "Done now that i = " << i << endl;

	return 0;
}
