#include <iostream>
#include <cctype>
#include <fstream>
#include <cstdlib>

const short StrSize = 60;

int main() {
	using namespace std;

	char filename[StrSize];			// Название файла
	char ch;						// Символы для получения имен
	int count;						// Количество меценатов

	ifstream FILE;					// Объект файла

	cout << "Enter name of data files: ";
	cin.get(filename, StrSize);

	FILE.open(filename);

	if (!FILE.is_open()) {
		cout << "ERROR\n";
		exit(EXIT_FAILURE);
	}

	FILE >> count;

	cout << count;

	while (FILE.good()) {
		while (FILE.get(ch))
		{
			cout << ch;
		}
	}

	if (FILE.eof()) {
		cout << "End of file\n";
	}
	else {
		cout << "ERROR\n";
	}

	return 0;
}
