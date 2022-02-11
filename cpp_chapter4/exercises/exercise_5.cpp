#include <iostream>

struct CandyBar {
	char name[20];
	double weight;
	int calories;
};

int main() {
	using namespace std;

	CandyBar snack{
		"Mocha Much",
		2.3,
		350
	};

	cout << "Name: " << snack.name << endl;
	cout << "Weight: " << snack.weight << endl;
	cout << "Calories: " << snack.calories << endl;

	return 0;
}
