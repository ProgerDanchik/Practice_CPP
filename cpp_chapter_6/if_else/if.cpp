//if.cpp -- использование оператора if
#include <iostream>

int main() {
	using std::cin;
	using std::cout;

	char ch;
	int spaces = 0;		//Количество пробелов
	int total = 0;		//Символов всего

	cin.get(ch);

	while (ch != '.') {

		if (ch == ' ') {	//Проверка ch на равенство пробелу
			++spaces;
		}
		++total;
		cin.get(ch);
	}

	cout << "spaces = " << spaces
		<< "; total = " << total;

	return 0;
}
