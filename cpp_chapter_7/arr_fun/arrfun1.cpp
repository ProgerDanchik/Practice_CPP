// arrfun1.cpp -- функция с аргументом массивом
#include <iostream>
const int ArrSize = 8;

int sum_arr(int arr[], int n);	//прототип

int main() {
	using namespace std;

	int cookies[ArrSize] = { 1, 2, 4, 8, 16, 32, 64, 128 };

	/*
		Некоторые системы требуют предварить int словом statc,
		чтобы разрешить инициализацию массива
	*/
	int sum = sum_arr(cookies, ArrSize);

	cout << "Total cookies eaten: " << sum << "\n"; // вывод количества съеденного печенья

	return 0;
}

// Возвращает сумму элементов массива целых чисел
int sum_arr(int arr[], int n) {
	int total = 0;

	for (int i = 0; i < n; i++) {
		total += arr[i];
	}

	return total;
}
