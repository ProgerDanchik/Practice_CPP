// arrfun2.cpp -- функция с аргументом-массивом
#include <iostream>
using namespace std;
const int ArrSize = 8;

int sum_arr(int arr[], int n);

int main() {


	int cookies[ArrSize] = { 1, 2, 4, 8, 16, 32, 64, 128 };

	cout << cookies << " = array address, ";
	cout << sizeof(cookies) << " = sizeof cookies\n";

	int sum = sum_arr(cookies, ArrSize);
	cout << "Total cookies eaten: " << sum << endl;

	sum = sum_arr(cookies, 3);
	cout << "First three eaters ate " << sum << " cookies.\n";

	sum = sum_arr(cookies + 4, 4);

	cout << "Last four eaters ate " << sum << " cookies.\n";

	return 0;
}

// Возвращает сумму элементов целочисленного массива

int sum_arr(int arr[], int n) {
	int total = 0;

	cout << arr << " = arr, ";
	cout << sizeof arr << " = sizeof arr\n";

	for (int i = 0; i < n; i++) {
		total = total + arr[i];
	}

	return total;
}
