#include <iostream>
#include <array>;

int main() {
	using namespace std;

	// Создание массива при помощи array
	array<int, 3> results;

	// Заполнение массива
	cout << "Enter the first result: ";
	cin >> results[0];

	cout << "Enter the second result: ";
	cin >> results[1];

	cout << "Enter the third result: ";
	cin >> results[2];

	// Вывод результатов программы
	cout << "\nFirst result: " << results[0] << endl;
	cout << "Second result: " << results[1] << endl;
	cout << "Third result: " << results[2] << endl;

	cout << "\nAverage of the results: "
		<< (results[0] + results[1] + results[2]) / results.size() << endl;

	return 0;
}
