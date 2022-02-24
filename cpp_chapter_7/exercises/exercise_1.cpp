#include <iostream>

double hm(double x, double y);				// прототип функции для вычисления среднего гармонического

int main() {
	using namespace std;
	setlocale(LC_ALL, "Russian");

	double x, y;

	cout << "Введите значения x и y через пробел; для завершения программы введите 0: ";

	while ((cin >> x && x != 0)  && (cin>> y && y !=0)) {
		cout << "Среднее гармоническое = " << hm(x, y) << endl;
		cout << "\nВведите значения еще раз: ";
 	}

	return 0;
}

double hm(double x, double y) {
	return 2.0 * x * y / (x + y);
}
