#include <iostream>

int fact(int n);

int main() {
	using namespace std;

	cout << "Enter the number factorial: ";
	int n;
	cin >> n;

	cout << fact(n) << endl;

	return 0;
}

int fact(int n) {
	return (n == 0) ? 1 : n * fact(n - 1);
}
