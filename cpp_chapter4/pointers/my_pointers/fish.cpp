#include <iostream>
#include <cstring>

struct fish
{
	char name[30];
	double ounces;
	double length;
};

int main() {
	using namespace std;

	fish* p_fish = new fish;

	cout << "Enter a name fish: ";
	cin >> p_fish->name;

	cout << "Enter a ounces fish: ";
	cin >> p_fish->ounces;

	cout << "Enter a length fish: ";
	cin >> p_fish->length;

	cout << "name = " << (*p_fish).name
		<< "; ounces = " << (*p_fish).ounces
		<< "; length = " << (*p_fish).length;

	
	return 0;
}
