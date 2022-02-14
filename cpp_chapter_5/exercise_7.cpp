#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>

// Константа для названия автомобилей
const short ArrSize = 30;

struct Car {
	char* car_name;
	short year_of_issue;
};

int main() {
	using namespace std;
	setlocale(LC_ALL, "Russian");		// Функция для отображения кириллицы

	int countCar;
	char carName[ArrSize];

	cout << "Сколько автомобилей поместить в каталог? ";
	cin >> countCar;
	cin.get();

	Car* car_struct = new Car[countCar];

	for (int i = 0; i < countCar; i++) {
		cout << "Автомобиль #" << i + 1 << endl;

		// Получения строкового значения
		cout << "Введите производителя: ";
		cin.getline(carName, ArrSize);
		car_struct[i].car_name = new char[strlen(carName) + 1];
		strcpy(car_struct[i].car_name, carName);

		// Получения года выпуска
		cout << "Укажите год выпуска: ";
		cin >> car_struct[i].year_of_issue;
		cin.get();
	}

	//Вывод всех полученных значений
	cout << "\nВот ваша коллекция:\n";

	for (int i = 0; i < countCar; i++) {
		cout << car_struct[i].year_of_issue
			<< " " << car_struct[i].car_name
			<< endl;
	}

	return 0;
}
