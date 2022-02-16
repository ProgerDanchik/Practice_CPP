#include <iostream>
#include <cctype>
#include <string>

int main() {
	using namespace std;

	string ch;
	int vowels = 0;			// Количество гласных букв
	int consonants = 0;		// Количество согласных букв
	int others = 0;			// Количество остальных символов

	cout << "Enter words (q to quit):\n";

	while (cin >> ch && ch != "q") {
		if (isalpha(ch[0])) {
			if ((ch[0] == 'a' || ch[0] == 'A' ||
				ch[0] == 'e' || ch[0] == 'E' ||
				ch[0] == 'u' || ch[0] == 'U' ||
				ch[0] == 'O' || ch[0] == 'o' ||
				ch[0] == 'I' || ch[0] == 'i')) {
				vowels++;
			}
			else {
				consonants++;
			}

		}
		else {
			others++;
		}
	}

	cout << vowels << " words beginning with vowels\n";
	cout << consonants << " words beggings with consonants\n";
	cout << others << " others";

	return 0;
}
