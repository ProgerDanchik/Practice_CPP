#include <iostream>
using namespace std;

const short strsize = 30;
const short ArrSize = 5;

// Структура имени БОП
struct bop {
	char fullname[strsize];		// Реальное имя
	char title[strsize];		// Должность
	char bopname[strsize];		// Секретное имя БОП
	int preference;				// 0 = полное имя, 1 = титул, 2 = имя БОП
};

// Прототипы функций
void showmenu();
void full_name(bop company[ArrSize]);
void title(bop company[ArrSize]);
void bopname(bop company[ArrSize]);
void preference(bop company[ArrSize]);

int main() {
	bop company[ArrSize]{
		"Steve Jobs", "Director", "Mr. Apple", 0,
		"Ilon Musk", "Investor", "Genius", 2,
		"Matvey Anisimov", "Web-Master", "Designer", 0,
		"Anna", "Robo-medic", "Ms. Brain", 1,
		"Daniil Birkin", "Software Engineer", "Big Boss", 2
	};

	showmenu();

	char ch;

	while ((ch = cin.get()) != 'q') {
		switch (ch)
		{
		case 'a':
			full_name(company);
			break;
		case 'b':
			title(company);
			break;
		case 'c':
			bopname(company);
			break;
		case 'd':
			preference(company);
			break;
		} 
	}

	return 0;
}

void showmenu() {
	cout << "a. display by name		b. display by title\n"
		<< "c. display by bopname		d. display by preference\n"
		<< "q. quit\n";
}

void full_name(bop company[ArrSize]) {
	for (int i = 0; i < ArrSize; i++) {
		cout << company[i].fullname << endl;
	}
}

void title(bop company[ArrSize]) {
	for (int i = 0; i < ArrSize; i++) {
		cout << company[i].title << endl;
	}
}

void bopname(bop company[ArrSize]) {
	for (int i = 0; i < ArrSize; i++) {
		cout << company[i].bopname << endl;
	}
}

void preference(bop company[ArrSize]) {
	for (int i = 0; i < ArrSize; i++) {
		if (company[i].preference == 0) {
			cout << company[i].fullname << endl;
		}
		else if (company[i].preference == 1) {
			cout << company[i].title << endl;
		}
		else {
			cout << company[i].bopname << endl;
		}
	}
}
