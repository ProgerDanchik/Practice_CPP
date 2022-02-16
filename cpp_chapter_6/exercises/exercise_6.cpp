#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <cstring>

const short ArrSize = 60;

// Структура меценатов
struct Patreons {
	char* name;
	double donat;
};

int main() {
	using namespace std;
	setlocale(LC_ALL, "Russian");

	int patrons;			// Количество меценатов
	char name[ArrSize];		// Имя мецената

	cout << "Введите количество меценатов: ";
	cin >> patrons;

	if (patrons != 0 && patrons > 0) {
		Patreons* patreons = new Patreons[patrons];

		for (int i = 0; i < patrons; i++) {
			cout << "Донатер #" << i + 1 << endl;
			cout << "Введите Ваше имя: ";
			cin >> name;

			patreons[i].name = new char[strlen(name) + 1];
			strcpy(patreons[i].name, name);

			cout << "Введите количество доната в $: ";
			cin >> patreons[i].donat;

			cout << endl;
		}

		cout << "\nGrand Patrons:\n";

		for (int i = 0; i < patrons; i++) {
			if (patreons[i].donat >= 10000) {
				cout << patreons[i].name << ": "
					<< patreons[i].donat << "$\n";
			}
		}

		cout << "\nPatrons:\n";

		for (int i = 0; i < patrons; i++) {
			if (patreons[i].donat < 10000) {
				cout << patreons[i].name << ": "
					<< patreons[i].donat << "$\n";
			}
		}
	}
	else {
		cout << "none" << endl;
	}

	return 0;
}
