//addpntrs.cpp -- pointer stacking
#include <iostream>

int main() {
	using namespace std;

	double wages[3] = { 1000.0, 2000.0, 3000.0 };
	short stacks[3] = { 3, 2, 1 };

	// Два способа получить адрес
	double* pw = wages;		// Имя массива равно адресу
	short* ps = &stacks[0];	

	cout << "pw = " << pw << ", *pw = " << *pw << endl;
	pw = pw + 1;
	cout << "add 1 to the pw pointer:\n";

	cout << "pw = " << pw << ", *pw = " << *pw << "\n\n";
	cout << "ps = " << ps << ", *ps = " << *ps << endl;
	ps = ps + 1;

	cout << "add 1 to the ps pointer:\n";
	cout << "ps = " << ps << ", *ps = " << *ps << "\n\n";

	// доступ к двум элементам с помощью нотации массивов
	cout << "access two elements with array notation\n";
	cout << "stacks[0] = " << stacks[0]
		<< ", stacks[1] = " << stacks[1] << "\n\n";

	// доступ к двум элементам с помощью нотации указателей

	cout << "access two elements with pointer notation\n";
	cout << "*stacks = " << *stacks
		<< ", (*stacks + 1) = " << *stacks + 1 << endl;

	cout << "sizeof(wages) = " << sizeof(wages) << endl;
	cout << "sizeof(pw) = " << sizeof(pw) << endl;

	return 0;
}
