#include <iostream>

struct CandyBar {
	char name[20];
	double weight;
	int calories;
};

int main() {
	using namespace std;

	CandyBar snack[3]{
		"Jack", 2, 3,
		"Woer", 13.54, 2,
		"Mors", 4.33, 7
	};

	cout << "Name[0]: " << snack[0].name << endl;
	cout << "Weight[0]: " << snack[0].weight << endl;
	cout << "Calories[0]:" << snack[0].calories << endl << endl;

	cout << "Name[1]: " << snack[1].name << endl;
	cout << "Weight[1]: " << snack[1].weight << endl;
	cout << "Calories[1]:" << snack[1].calories << endl << endl;

	cout << "Name[2]: " << snack[2].name << endl;
	cout << "Weight[2]: " << snack[2].weight << endl;
	cout << "Calories[2]:" << snack[2].calories << endl << endl;
	
	return 0;
}
