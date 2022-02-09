//init_cpp -- pointer initialization
#include <iostream>

int main() {
	using namespace std;

	int higgens = 5;
	int* p_higgens = &higgens;

	cout << "Value of higgens = " << higgens
		<< "; Address of higgens = " << &higgens << endl;

	cout << "Value of *p_higgens = " << *p_higgens
		<< "; Value of p_higgens = " << p_higgens << endl;

	return 0;
}
