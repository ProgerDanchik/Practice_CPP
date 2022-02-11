#include <iostream>
#include <string>
using namespace std;

struct person {
	string firstName;
	string lastName;
	string fullName;
};

int main() {

	person man;

	//Объявление указателей

	string* p_firstName;
	string* p_lastName;
	string* p_fullName = &man.fullName;

	cout << "Enter your first name: ";
	cin >> man.firstName;
	p_firstName = &man.firstName;

	cout << "Enter your last name: ";
	cin >> man.lastName;
	p_lastName = &man.lastName;

	*p_fullName = *p_lastName + ", " + *p_firstName;

	cout << "Here's the information in a single string: " << *p_fullName << endl;

	return 0;
}
