#include <iostream>

// Константы для размеров массива
const short ArrSize = 12;
const short Year = 3;

struct Months {
	const char* month[ArrSize]{
		"January",
		"February",
		"March",
		"April",
		"May",
		"June",
		"July",
		"August",
		"September",
		"October",
		"November",
		"December",
	};
};

int main() {
	using namespace std;

	// Инициализация переменных
	int profit[Year]{0, 0, 0};
	int books[Year][ArrSize];
	int sum = 0;
	Months months;

	// Цикл ввода и обработки данных о продажах
	for (int i = 0; i < Year; ++i) {
		cout << i + 1 << " year of sales: \n\n";
		for (int j = 0; j < ArrSize; ++j) {
			cout << "Enter the number of books sold in "
				<< months.month[j] << ": ";
			cin >> books[i][j];

			profit[i] += books[i][j];
			sum += books[i][j];
			cout << endl;
		}
		cout << endl;
	}

	cout << "Sales amount for each year: " << endl;

	// Вывод продаж за каждый год
	for (int i = 1; i <= Year; i++) {
		cout << i << " year = " << profit[i - 1] << endl;
	}

	cout << "\nSum of sales for 3 years: " << sum << endl;

	return 0;
}
