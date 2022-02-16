#include <iostream>

int main() {
	using namespace std;

	int tvarp;

	double total;

	while (cin >> tvarp && tvarp >= 0) {
		if (tvarp < 10000) {
			total = tvarp * 0.0;
		}
		else if (tvarp >= 10000 && tvarp < 20000) {
			total = (5000 * 0.0) + ((tvarp % 10000) * 0.10);
		}
		else if (tvarp >= 20000 && tvarp < 35000) {
			total = (5000 * 0.0) + (10000 * 0.10) + ((tvarp % 20000) * 0.15);
		}
		else if (tvarp >= 35000) {
			total = (5000 * 0.0) + (10000 * 0.10) + (20000 * 0.15) + ((tvarp % 35000) * 0.20);
		}

		cout << total << endl;
	}

	return 0;
}
