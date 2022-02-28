#include <iostream>
using namespace std;

// Прототипы функций
int fill_array(double* arr, int size);
void show_array(double* arr, int size);
void reverse_array(double* arr, int size);

int main() {
	setlocale(LC_ALL, "Russian");
	int size;

	cout << "Введите размер массива: ";
	cin >> size;

	double* arr = new double[size];

	size = fill_array(arr, size);
	show_array(arr, size);
	reverse_array(arr, size);
	show_array(arr, size);

	return 0;
}

// Функция заполнения массива
int fill_array(double* arr, int size) {
	cout << "Введите значения массива\n";
	int i;
	int x = 0;

	for (i = 0; i < size; i++) {
		cout << "Значение #" << i + 1 << ": ";
		if (cin >> *arr && *arr >= 0) {
			arr++;
		}
		else {
			return i;
		}
	}
}

// Функция отображения массива
void show_array(double* arr, int size) {
	cout << "Значения массива: ";
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}

	cout << endl;
}

// Функция изменения массива
void reverse_array(double* arr, int size) {
	double temp;

	for (int i = 1; i < (size / 2); i++) {
		temp = arr[i];
		arr[i] = arr[size - i - 1];
		arr[size - i - 1] = temp;
	}
}
