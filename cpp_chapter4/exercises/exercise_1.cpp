#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <cstring>

struct student
{
	char *p_firstName;	// Первое имя
	char *p_lastName;	// Второе имя

	char grade;	// Оценка
	short age;	//Возраст
};

int main() {
	using namespace std;

	student* p_student = new student;

	const short arrSize = 20;
	char firstName[arrSize], lastName[arrSize];

	cout << "What is your first name? ";	// Получения имени
	cin.getline(firstName, arrSize);
	p_student->p_firstName = new char[strlen(firstName) + 1];		//Выделение новой памяти для экономии места
	strcpy(p_student->p_firstName, firstName);

	cout << "What is your last name? ";		// Получение фамилии (второго имени)
	cin >> lastName;
	p_student->p_lastName = new char[strlen(lastName) + 1];		//Выделение новой памяти для экономии места
	strcpy(p_student->p_lastName, lastName);

	cout << "What letter grade do you deserve? ";	// Получение желаемой оценки
	cin >> p_student->grade;
	p_student->grade = char(int(p_student->grade) + 1);

	cout << "What is your age? ";	// Получение возраста студента
	cin >> p_student->age;

	cout << "Name: " << p_student->p_lastName << ", " << p_student->p_firstName << endl;
	cout << "Grade: " << p_student->grade << endl;
	cout << "Age: " << p_student->age << endl;

	// Вывод данных перед удалением
	/*
	cout << p_student << endl;
	cout << p_student->p_firstName << endl;
	cout << p_student->p_lastName << endl;
	*/
	
	// Удаление лишней памяти после использования
	delete p_student->p_firstName;
	delete p_student->p_lastName;
	delete p_student;

	//Проверка на очистку памяти
	/*
	cout << p_student << endl;
	cout << p_student->p_firstName << endl;
	cout << p_student->p_lastName << endl;
	*/

	return 0;
}
