#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>

struct CandyBar {
	std::string* name;
	double weight;
	int calories;
};

int main() {
	using namespace std;

	// Объявление ячейки памяти для массива структур
	CandyBar* snack = new CandyBar[3];
	
	// Инициализация первой структуры
	snack[0].name = new string;
	*snack[0].name = "Jack";
	snack[0].weight = 4.3;
	snack[0].calories = 5;

	//Инициализация второй структуры
	snack[1].name = new string;
	*snack[1].name = "Jojo";
	snack[1].weight = 4.4;
	snack[1].calories = 13;

	//Инициализация третьей структуры
	snack[2].name = new string;
	*snack[2].name = "LooloHooo";
	snack[2].weight = 2.4;
	snack[2].calories = 7;

	cout << "Name[0]: " << *snack[0].name << endl;
	cout << "Weight[0]: " << snack[0].weight << endl;
	cout << "Calories[0]:" << snack[0].calories << endl << endl;

	cout << "Name[1]: " << *snack[1].name << endl;
	cout << "Weight[1]: " << snack[1].weight << endl;
	cout << "Calories[1]:" << snack[1].calories << endl << endl;

	cout << "Name[2]: " << *snack[2].name << endl;
	cout << "Weight[2]: " << snack[2].weight << endl;
	cout << "Calories[2]:" << snack[2].calories << endl << endl;

	// Чистка памяти
	delete snack[0].name;
	delete snack[1].name;
	delete snack[2].name;
	delete[] snack;

	return 0;
}
