//delete.cpp -- Use delete operation
#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <cstring>
using namespace std;

char* getname(void); // прототип функции

int main() {
	char* name;

	name = getname();
	cout << "name = " << name << "; address = " <<  (int*)name << endl;
	delete[] name;

	name = getname();
	cout << "name = " << name << "; address = " << (int*)name << endl;
	delete[] name;

	return 0;
}

char* getname() {
	char temp[80];

	cout << "Enter last name: ";
	cin >> temp;

	char* pn = new char[strlen(temp) + 1];
	strcpy(pn, temp);

	return pn;
}
