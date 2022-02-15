//jump.cpp -- использование операторов continue и break
#include <iostream>
const int ArrSize = 80;

int main() {
	using namespace std;

	char line[ArrSize];
	int spaces = 0;

	cout << "Enter a line of text:\n";
	cin.get(line, ArrSize);
	cout << "Complete line:\n" << line << endl;
	cout << "Line through first period:\n";

	for (int i = 0; line[i] != '\0'; i++) {
		cout << line[i];

		if (line[i] == '.') {
			break;
		}
		if (line[i] != ' ') {
			continue;
		}
		spaces++;
	}

	cout << "\n" << spaces << " spaces\n";
	cout << "Done.\n";

	return 0;
}
