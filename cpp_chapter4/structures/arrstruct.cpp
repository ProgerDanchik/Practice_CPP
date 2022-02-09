//arrstruct.cpp -- array of structures
#include <iostream>

struct inflatable {
	char name[20];
	float volume;
	double price;
};

int main() {
	using namespace std;

	inflatable guests[2]{
		{"Butterfly", 0.3, 5.99},
		{"Black Mamba", 2.3, 46.99}
	};

	cout << "The guests " << guests[0].name << " and "
		<< guests[1].name << "\nhave a combined volume of "
		<< guests[0].volume + guests[1].volume << " cubic feet.\n";

	return 0;
}
