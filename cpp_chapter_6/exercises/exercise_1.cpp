#include <iostream>
#include <cctype>

int main() {
	using namespace std;

	char ch;

	cout << "Enter char:\n";

	while ((ch = cin.get()) != '@') {
		if (isdigit(ch)) {
			continue;
		}
		
		isupper(ch) ? ch = tolower(ch) : ch = toupper(ch);
		cout << ch;
	}

	return 0;
}
