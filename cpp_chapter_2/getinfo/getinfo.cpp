#include <iostream>

int main() {
	using namespace std;

	int carrots;
	cout << "How many carrots do you have?" << endl;
	cin >> carrots; // C++ input
	cout << "Here are two more. ";
	carrots = carrots + 2;
	// the following line performs the concatenation of the output
	cout << "Now you have " << carrots << " carrots." << endl;

	return 0;
}
