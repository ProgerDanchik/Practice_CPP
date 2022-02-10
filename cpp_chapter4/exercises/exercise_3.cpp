#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <cstring>

struct person {
	char* firstName;
	char* lastName;
	char* fullName;
};

int main() {
	using namespace std;

	const short arrSize = 20;	// Ограничения для строк char
	char firstName[arrSize], lastName[arrSize];

	// Выбираем адрес хранения для структуры
	person* p_person = new person;

	// Сохраняем значения в указатели, для экономия памяти
	cout << "Enter your first name: ";
	cin >> firstName;
	p_person->firstName = new char[strlen(firstName) + 1];
	strcpy(p_person->firstName, firstName);

	cout << "Enter your last name: ";
	cin >> lastName;
	p_person->lastName = new char[strlen(lastName) + 1];
	strcpy(p_person->lastName, lastName);

	// Формирование полного имени
	p_person->fullName = new char[strlen(p_person->firstName) + strlen(p_person->lastName) + 3];
	strcpy(p_person->fullName, p_person->lastName);
	strcat(p_person->fullName, ", ");
	strcat(p_person->fullName, p_person->firstName);

	// Уничтожение ненужных указателей
	delete[] p_person->firstName;
	delete[] p_person->lastName;

	cout << "Here's the information in a single string: " << p_person->fullName << ".\n";

	// Очисткая оставшиеся памяти
	delete[] p_person->fullName;
	delete p_person;

	return 0;

}
