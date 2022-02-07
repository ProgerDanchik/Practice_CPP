// morechar.cpp -- comparing char and int types
#include <iostream>
int main() {
	using namespace std;
	char ch = 'M';

	int i = ch;

	cout << "The ASCII code for " << ch << " is " << i << endl;

	ch += 1;
	i = ch;

	cout << "The ASCII code for " << ch << " is " << i << endl;
	
	//Using the member function cout.put() to display a character

	cout << "Displaying char ch using cout.put(ch): ";
	cout.put(ch);

	//Using cout.put() to display a character constant
	cout.put('!');

	cout << endl << "Done." << endl;

	return 0;
}
