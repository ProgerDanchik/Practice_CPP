// cctypes.cpp -- использование библиотеки ctype.h
#include <iostream>
#include <cctype>

int main() {
	using namespace std;

	cout << "Enter text for analysis, and type @"
		<< " to terminate input.\n";	// запрос текста для анализа; завершающий символ - @
	char ch;

	int whitespace = 0;				// число пробелов
	int digits = 0;					// число десятичных цифр
	int chars = 0;					// число буквенных символов
	int punct = 0;					// число знаков препинания
	int others = 0;					// число остальных значений

	cin.get(ch);					// получение первого символа

	while (ch != '@') {
		if (isalpha(ch)) {			// проверка на буквенный символ
			chars++;
		}
		else if (isspace(ch)) {		// проверка на пробельный символ
			whitespace++;
		}
		else if (isdigit(ch)) {		// проверка на десятичную цифру
			digits++;
		}
		else if (ispunct(ch)) {		// проверка на знак препинания
			punct++;
		}
		else {
			others++;
		}

		cin.get(ch);				// получения следующего символа
	}

	cout << "letters = " << chars
		<< "; whitespaces = " << whitespace
		<< "; digits = " << digits
		<< "; punct = " << punct
		<< "; others = " << others
		<< endl;

	return 0;
}
