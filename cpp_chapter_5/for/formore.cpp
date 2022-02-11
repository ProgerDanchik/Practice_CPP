//formore.cpp -- дополнительные сведения о циклах for
#include <iostream>

const int ArrSize = 16;		//Внешнее объявление переменной

int main() {
	long long factorials[ArrSize];

	factorials[1] = factorials[0] = 1LL;

	for (int i = 2; i < ArrSize; i++) {
		factorials[i] = i * factorials[i - 1];
	}

	for (int i = 0; i < ArrSize; i++) {
		std::cout << i << "! = " << factorials[i] << std::endl;
	}

	return 0;
}
