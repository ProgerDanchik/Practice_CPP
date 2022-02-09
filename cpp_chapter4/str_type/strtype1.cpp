//strtype1.cpp -- using a C++ string class
#include <iostream>
#include <string> // Обеспечение доступа к классу string

int main() {
	using namespace std;

	char charr1[20];				// Создание пустого массива
	char charr2[20] = "jaguar";		// Создание инициализированного массива
	string str1;					// Создание пустого объекта строки
	string str2 = "panther";		// Создание инициализированного объекта строки

	cout << "Enter a kind of feline: ";		// Введите животное из семейства кошачьих
	cin >> charr1;

	cout << "Enter another kind of feline: ";
	cin >> str1;

	cout << "Here are some felines:\n";
	cout << charr1 << " " << charr2 << " "
		<< str1 << " " << str2 << endl;

	cout << "The third letter in " << charr2 << " is "
		<< charr2[2] << endl;
	cout << "The third letter in " << str2 << " is "
		<< str2[2] << endl;

	return 0;
}
