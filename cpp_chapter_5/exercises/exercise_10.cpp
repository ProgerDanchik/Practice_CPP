#include <iostream>

int main() {
	using namespace std;
	setlocale(LC_ALL, "Russian");

	int n, count;	// Количество строк

	cout << "Введите количество строк: ";
	cin >> n;

	count = 1;

	for (int i = n; i != 0; i--) {
		for (int j = 0; j < i - 1; j++) {
			cout << ".";
		}

		for (int j = 0; j < count; j++) {
			cout << "*";
		}

		count++;
		cout << endl;
	} 

	return 0;

}
