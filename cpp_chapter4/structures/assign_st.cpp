//assign_st.cpp -- structure assignment 
#include <iostream>

struct inflatable {
	char name[20];
	float volume;
	double price;
};

int main() {
	using namespace std;

	inflatable bouquet{
		"sunflowers",
		0.13,
		10.19
	};

	inflatable choice;

	cout << "bouquet: " << bouquet.name << " for $"
		<< bouquet.price << endl;

	choice = bouquet;	// Присваивание одной структуры другой

	cout << "choce: " << choice.name << " for $"
		<< choice.price << endl;

	return 0;

}
