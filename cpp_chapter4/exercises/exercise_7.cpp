#include <iostream>

struct PizzaProduct {
	char nameCompany[45];
	double diameter;
	double weight;
};

int main() {
	using namespace std;

	const short charSize = 45;

	// Объявление переменной структуры
	PizzaProduct pizza_product;

	// Инициализация данных структуры
	cout << "Enter company name:";
	cin.getline(pizza_product.nameCompany, charSize);

	cout << "Enter the diameter of the pizza: ";
	cin >> pizza_product.diameter;

	cout << "Enter the weight of the pizza: ";
	cin >> pizza_product.weight;

	// Вывод всей заполненной информации
	cout << "Company name: " << pizza_product.nameCompany << endl;
	cout << "Diameter pizza: " << pizza_product.diameter << endl;
	cout << "Weight pizza: " << pizza_product.weight << endl;

	return 0;

}
