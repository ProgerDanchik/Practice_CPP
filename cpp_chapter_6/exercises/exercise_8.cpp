#include <iostream>
#include <fstream>
#include <cstdlib>

const short StrSize = 60;

int main() {
	using namespace std;

	ifstream inFile;				// Объект для вывода

	char filename[StrSize];			// Название файла для подсчета символов
	int count = 0;					// Количество символов

	cout << "Enter name of data files: ";		
	cin.getline(filename, StrSize);				// Открытие файла
	
	inFile.open(filename);

	if (!inFile.is_open()) {
		cout << "ERROR!";
		exit(EXIT_FAILURE);
	}

	char ch;
	inFile >> ch;

	while (inFile.good()) {
		count++;
		inFile >> ch;
	}

	if (inFile.eof()) {
		cout << "End of file\n";
	}
	else {
		cout << "ERROR";
	}

	if (count == 0) {
		cout << "NO DATA\n";
	}
	else {
		cout << "Count chars = " << count << endl;
	}
}
