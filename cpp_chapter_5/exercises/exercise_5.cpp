#include <iostream>

const short ArrSize = 12;

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
	int profit;
	int books[ArrSize];
	Months months;

	profit = 0;

	for (int i = 0; i < ArrSize; ++i) {
		cout << "Enter the number of books sold in "
			<< months.month[i] << ": ";
		cin >> books[i];
		cout << endl;
	}

	for (int x : books) {
		profit += x;
	}

	cout << "Sales for the year: " << profit << endl;

	return 0;
}
