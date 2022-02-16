#include <iostream>
using namespace std;

// Прототипы функций
void carnivore();
void pianist();
void tree();
void game();
void showmenu();

int main() {
	showmenu();

	bool flag = true;
	char ch;
	cin >> ch;

	while (flag) {
		switch (ch)
		{
		case 'c':
			carnivore();
			flag = false;
			break;
		case 'p':
			pianist();
			flag = false;
			break;
		case 't':
			tree();
			flag = false;
			break;
		case 'g':
			game();
			flag = false;
			break;
		default:
			cout << "Please enter a c, p, t, or g: ";
			cin >> ch;
		}
	}

	return 0;
	
}

void carnivore() {
	cout << "My favorite carnivore is Irbis.\n";
}

void pianist() {
	cout << "My favorite pianist is Matt Bellamy.\n";
}

void tree() {
	cout << "My favorite tree is Sakura.\n";
}

void game() {
	cout << "My favorite game is Red Dead Redemption 2\n";
}

void showmenu() {
	cout << "Please enter one of the following choices:\n"
		<< "c) carnivore	p) pianist\n"
		<< "t) tree		g) game\n";
}
