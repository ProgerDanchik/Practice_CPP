//textin2.cpp -- использование cin.get(char)
#include <iostream>

int main() {
	using namespace std;

	char ch;
	int count = 0;	//Счетчик

	cout << "Enter characters; enter # to quit:\n";
	cin.get(ch);

	while (ch != '#') {
		cout << ch;
		++count;
		cin.get(ch);
	}

	cout << endl << count << " characters read\n";

	return 0;
}