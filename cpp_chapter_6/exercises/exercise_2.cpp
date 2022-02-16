#include <iostream>

const short MAX = 10;

int main() {
	using namespace std;
	setlocale(LC_ALL, "Russian");

	double donations[MAX];

	cout << "Введите значения пожертвований"
		<< ", максимум значений = " << MAX << endl;
	
	cout << "Для прекращения ввода, введите нечисловое значение.\n";

	cout << "Пожертвование #1: ";
	int i = 0;

	while (i < MAX && cin >> donations[i]) {
		if (++i < MAX) {
			cout << "Пожертвование #" << i + 1
				<< ": ";
		}
	}

	double average = 0.0;		// среднее значение пожертвований

	for (int j = 0; j < i; j++) {
		average += donations[j];
	}

	// вывод результатов

	if (i == 0) {
		// Если пожертвований нет
		cout << "Пожертвований нет\n";
	} else {
		// Вывод среднего значения, и чисел, которые превышают это значение
		cout << average / i << " - среднее значение пожертвований.\n";

		cout << "Вывод значений, которые превышают среднее число:\n";

		for (double x : donations) {
			if (x > average / i) {
				cout << x << endl;
			}
		}
	}

	return 0;
}
