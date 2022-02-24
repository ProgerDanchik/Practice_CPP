#include <iostream>
using namespace std;

const int SIZE = 10;								// размер массива

// Прототипы функций
int enter_array(double* arr);
void show_result(const double* arr, unsigned int size);
double average_result(const double* arr, unsigned int size);

int main() {
	setlocale(LC_ALL, "Russian");
	
	double arr_result[SIZE];					// массив для хранения результатов
	unsigned int count;							// переменная для хранения количества заполненных данных
	double average;								// переменная среднего значения результатовs

	count = enter_array(arr_result);
	if (count > 0) {
		show_result(arr_result, count);
		average = average_result(arr_result, count);

		cout << "Среднее значения результатов: " << average << endl;
	}
	else {
		cout << "Результатов нет\n";
	}

	return 0;
}

// Функция для ввода значений в массив и возвращения его размера
int enter_array(double* arr) {
	unsigned int count;							// переменная для хранения количества заполненных данных
	int x = 0;

	cout << "Введите значения результатов;\n";
	cout << "Для прекращения ввода используйте отрицательное число или символы\n";

	for (count = 0; count < SIZE; count++) {
		
		cout << "#" << count + 1 << ": ";
		if (cin >> x && x >= 0) {
			*arr = x;
			arr++;
			continue;
		}
		else {
			break;
		}
	}

	return count;

}

// Функция отображения результатов
void show_result(const double* arr, unsigned int size) {

	cout << "\nОтображение результата:\n";

	for (unsigned int i = 0; i < size; i++) {
		cout << "Результат #" << i + 1 << " " << *arr << endl;
		arr++;
	}
}

// Функция вычисления среднего результата
double average_result(const double* arr, unsigned int size) {
	double result = 0;
	for (unsigned int i = 0; i < size; i++) {
		result += *arr;
	}

	return result / size;
}
