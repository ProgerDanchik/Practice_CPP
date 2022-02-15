// and.cpp -- использование логической операции "И"
#include <iostream>
const int ArrSize = 6;

int main() {
	using namespace std;

	float naaq[ArrSize];

	cout << "Enter the NAAQs (New Age Awareness Quotients) "
		<< "of\nyour neighbors. Program terminates "
		<< "when you make\n" << ArrSize << " entries "
		<< "or enter a negative value.\n";

	int i = 0;
	float temp;
	cout << "First value: ";		// ввод первого значения
	cin >> temp;

	while (i < ArrSize && temp >= 0) {		// два критерия завершения
		naaq[i] = temp;
		++i;

		if (i < ArrSize) {		// в массиве еще есть место
			cout << "Next value: ";
			cin >> temp;
		}

	}

	if (i == 0) {
		cout << "No data--bye\n";		// данные отсутсвуют
	}
	else {
		cout << "Enter your NAAQ: ";

		float you;
		cin >> you;

		int count = 0;

		for (int j = 0; j < i; j++) {
			if (naaq[j] > you) {
				++count;
			}
		}

		cout << count;
		cout << " of your neighbors have greates awareness of\n"
			<< "the New Age than you do.\n";
	}

	return 0;
}
