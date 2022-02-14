#include <iostream>
#include <string>

int main() {
	using namespace std;
	setlocale(LC_ALL, "Russian");

	string word;
	int count = 0;

	cout << "Введите слова "
		<< "(для завершения введите слово done):\n";

	cin >> word;

	while (word != "done") {
		count++;
		cin >> word;
	}

	cout << "Вы ввели " << count
		<< " слов.\n";

	return 0;
}
