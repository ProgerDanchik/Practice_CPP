//insrt3.cpp -- reading more than one word with get() and get()
#include <iostream>

int main() {
	using namespace std;

	const int ArSize = 20;
	char name[ArSize];
	char dessert[ArSize];

	cout << "Enter your name:\n";
	cin.get(name, ArSize).get();
	cout << "Enter your favorite dessert:\n";
	cin.get(dessert, ArSize).get();

	cout << "I have some delicious " << dessert
		<< " for you, " << name << ".\n";

	return 0;
}
