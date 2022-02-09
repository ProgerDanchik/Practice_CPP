//strtype3.cpp -- additional string class facilities
#define _CRT_SECURE_NO_WARNINGS 1	// Инициализация переменной для совместимости с классическими функциями
#include <iostream>
#include <string>	// Обеспечение доступа к классу string
#include <cstring>  // Библиотека обработки строк в стиле C

int main() {
	using namespace std;

	char charr1[20];
	char charr2[20] = "jaguar";
	string str1;
	string str2 = "panther";

	// Присваивание объектов string и символьных массивов
	str1 = str2;
	strcpy(charr1, charr2);

	// Добавление объектов string и символьных массивов
	str1 += " paste";
	strcat(charr1, " juice");

	// Определение длины объекта string и строки в стиле C
	int len1 = str1.size();
	int len2 = strlen(charr1);

	cout << "The string " << str1 << " contains "
		<< len1 << " characters.\n";
	cout << "The string " << charr1 << " constains "
		<< len2 << " characters.\n";

	return 0;
}
