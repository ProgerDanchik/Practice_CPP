#include <iostream>

int main() {
	using namespace std;

	int x, y, count;

	count = 0;

	cout << "Enter a first number: ";		// Ввод первого числа
	cin >> x;

	cout << "Enter a second number: ";		//Ввод второго числа
	cin >> y;

	// Подсчет суммы всех чисел от x до y включительно
	for (int i = x; i <= y; ++i) {
		count += i;
	}

	cout << "Result = " << count << endl;

	return 0;
}
