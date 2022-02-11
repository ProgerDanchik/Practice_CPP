#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <cstring>
#include <limits>

struct PizzaProduct {
	// Динамическая переменная названия компании
	char* nameCompany;
	double diameter;
	double weight;
};

int main() {
	using namespace std;

	const short charSize = 45;
	// Статическая переменная названия компании
	char name_company[charSize];

	// Объявление динамической переменной структуры
	PizzaProduct* pizza_product = new PizzaProduct;

	// Инициализация данных структуры
	cout << "Enter the diameter of the pizza: ";
	cin >> pizza_product->diameter;
	cin.get();

	// Добавление название компании через указатель
	cout << "Enter company name: ";
	cin.getline(name_company, charSize);
	pizza_product->nameCompany = new char[strlen(name_company) + 1];
	strcpy(pizza_product->nameCompany, name_company);

	cout << "Enter the weight of the pizza: ";
	cin >> pizza_product->weight;

	// Вывод всей заполненной информации
	cout << "Company name: " << pizza_product->nameCompany << endl;
	cout << "Diameter pizza: " << pizza_product->diameter << endl;
	cout << "Weight pizza: " << pizza_product->weight << endl;

	// Очистка указателей от неиспользуемой памяти
	delete[] pizza_product->nameCompany;
	delete pizza_product;

	return 0;

}
