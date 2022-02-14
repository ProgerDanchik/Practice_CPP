//nested.cpp -- вложенные циклы и двумерный массив
#include <iostream>
const int Cities = 5;
const int Years = 4;

int main() {
	using namespace std;

	const char* cities[Cities]{		//Массив указателей на 5 строек
		"Gribble City",
		"Gribbletown",
		"New Gribble",
		"San Gribble",
		"Gribble Vista"
	};

	int maxtemps[Years][Cities]{	//Двумерный массив
		{96, 101, 89, 102, 106},
		{94, 103, 99, 102, 100},
		{93, 111, 95, 103, 102},
		{99, 102, 91, 101, 104}
	};

	cout << "Maximum temperatures for 2008 - 2011\n\n";

	for (int city = 0; city < Cities; ++city) {
		cout << cities[city] << ":\t";
		for (int year = 0; year < Years; ++year) {
			cout << maxtemps[year][city] << "\t";
		}
		cout << endl;
	}
	
	return 0;

}
