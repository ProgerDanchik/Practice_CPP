#include <iostream>
#include <array>
const short ArrSize = 16;

int main() {
	using namespace std;

	array <long double, ArrSize> factorials;
	factorials[1] = factorials[0] = 1L;

	for (int i = 2; i < ArrSize; i++) {
		factorials[i] = i * factorials[i - 1];
	}

	for (int i = 0; i < ArrSize; i++) {
		cout << i << "! = " << factorials[i] << endl;
	}

	return 0;
}
