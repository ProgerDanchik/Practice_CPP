#include <iostream>

long double probability(unsigned numbers, unsigned picks);

int main() {
	using namespace std;

	double total, choices;
	double result;

	// Ввод общего количества номеров и количества номеров, которые нужено угадать
	cout << "Enter the total number of choices on the game card and\n"
		<< "the number of picks allowed:\n";

	while ((cin >> total >> choices) && choices <= total) {
		cout << "Enter again, but for the mega number," << 
			"the number of cards(q to quit): ";
		result = probability(total, choices);

		if ((cin >> total) && 1 <= total) {
			result *= probability(total, 1);
			cout << "You have one chance in ";
			cout << result << " of winning.\n";
		}

		cout << "Next two numbers (q to quit): ";
	}

	cout << "Bye\n";

	return 0;
}

long double probability(unsigned numbers, unsigned picks) {
	long double result = 1.0;
	long double n;
	long double p;

	for (n = numbers, p = picks; p > 0; n--, p--) {
		result = result * n / p;
	}

	return result;
}
