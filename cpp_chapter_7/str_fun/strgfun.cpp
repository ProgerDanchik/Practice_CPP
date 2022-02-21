// strgfun.cpp -- функция со строковым аргументом
#include <iostream>

unsigned int c_in_str(const char* str, char ch);

int main() {
	using namespace std;

	char mmm[15] = "minimum";

	const char *wail = "ululate";

	unsigned int ms = c_in_str(mmm, 'm');
	unsigned int us = c_in_str(wail, 'u');

	cout << ms << " m characters in " << mmm << endl;
	cout << us << " u characters in " << wail << endl;

	return 0;
}

// Эта функция подсчитывает количество символов ch в строке str
unsigned int c_in_str(const char* str, char ch) {
	unsigned int count = 0;

	while (*str) {
		if (*str == ch) {
			count++;
		}
		str++;
	}

	return count;
}
