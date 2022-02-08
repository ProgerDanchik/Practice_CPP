/*
	Displays the percentage of the
	of the selected country and the whole world 
*/

#include <iostream>

int main() {
	using namespace std;

	unsigned long long word_population, country_population;

	cout << "Enter the world's population: ";
	cin >> word_population;

	cout << "Enter the population of country: ";
	cin >> country_population;

	cout << "The population of the country is " 
		<< double(long double(country_population) / long double(word_population) * 100)
		<< "% of the world population.\n";

	return 0;
}
