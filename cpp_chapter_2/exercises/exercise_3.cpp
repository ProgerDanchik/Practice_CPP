#include <iostream>
using namespace std;

void message1() {
	cout << "Three blind mice" << endl;
}

void message2() {
	cout << "See how they run" << endl;
}

int main() {
	message1();
	message1();
	message2();
	message2();

	return 0;
}
