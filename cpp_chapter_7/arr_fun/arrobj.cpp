// arrobj.cpp -- функции с объектами array (C++11)
#include <iostream>
#include <array>
#include <string>
using namespace std;

// Константные данные
const int SEASONS = 4;
const array<string, SEASONS> SNAMES =
{ "Spring", "Summer", "Fall", "Winter" };

// Функция для изменения объекта array
void fill(array<double, SEASONS>* pa);

// Функция, использующая объект array, но не изменяющая его
void show(array<double, SEASONS> da);

int main() {
	array<double, SEASONS> expenses;
	fill(&expenses);
	show(expenses);

	return 0;
}

void fill(array<double, SEASONS>* pa) {
	for (int i = 0; i < SEASONS; i++) {
		cout << "Enter " << SNAMES[i] << " expenses: ";			// ввод расходов по временам года
		cin >> (*pa)[i];
	}
}

void show(array<double, SEASONS> da) {
	double total = 0.0;

	cout << "\nEXPENSES\n";										// вывод расходов по временам года
	
	for (int i = 0; i < SEASONS; i++) {
		cout << SNAMES[i] << ": $" << da[i] << endl;
		total += da[i];
	}

	cout << "Total Expenses: $" << total << endl;				// вывод общей суммы расходов
}
