#include <iostream>
using namespace std;

void convert(int a) {
	cout << "Your age in mouths is " << a * 12 << endl;
}

int main() {
	int age;

	cout << "Enter your age: ";
	cin >> age;

	convert(age);

	return 0;
}
