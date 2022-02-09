//pointer.cpp -- pointer variable
#include <iostream>

int main() {
	using namespace std;

	int updates = 6;
	int *p_updates;		// Объявления указателя

	p_updates = &updates;		// Присвоить адрес int указателю

	//Выразить значения двумя способами
	cout << "Values: updates = " << updates
		<< ", *p_updates = " << *p_updates << endl;

	//Выразить адреса двумя способами
	cout << "Addresses: &updates = " << &updates
		<< ", p_updates = " << p_updates << endl;

	//Изменить значение через указатель
	*p_updates = *p_updates + 1;
	cout << "Now updates = " << updates << endl;

	return 0;

}
