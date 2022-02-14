//ifelse.cpp -- использование оператора if else
#include <iostream>

int main() {
	using std::cout;
	using std::cin;

	char ch;
	cout << "Type, and I shall repeat.\n";
	cin.get(ch);

	while (ch != '.') {
		if (ch == '\n') {
			cout << ch;
		}
		else {
			cout << ++ch;
		}

		cin.get(ch);
	}

	cout << "\Please exuse the slight confussion.\n";

	return 0;
}
