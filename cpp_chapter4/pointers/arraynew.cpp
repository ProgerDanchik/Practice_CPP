//arraynew.cpp -- Using the new operation for arrays
#include <iostream>

int main() {
	using namespace std;

	double* p3 = new double[3];
	p3[0] = 0.2;
	p3[1] = 2.9;
	p3[2] = 1.3;

	cout << "p3[1] is " << p3[1] << ".\n";
	p3 = p3 + 1;
	cout << "Now p3[0] is " << p3[0] << " and "
		<< "p3[1] is " << p3[1] << endl;

	p3 = p3 - 1;

	delete[] p3;

	return 0;
}
