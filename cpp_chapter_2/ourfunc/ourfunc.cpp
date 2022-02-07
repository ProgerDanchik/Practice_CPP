// ourfunc.cpp -- eigenfunction detection
#include <iostream>

void simon(int); // the simon( ) function prototype 

int main() {
	using namespace std;

	simon(3);
	
	int count;
	cin >> count;
	simon(count);

	cout << "Done!" << endl;

	return 0;
}

void simon(int n) { // definition of the function simon ()
	using namespace std;

	cout << "Simon says touch your toes " << n << " times." << endl;	
}
