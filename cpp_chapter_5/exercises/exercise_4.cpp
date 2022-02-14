#include <iostream>
#include <ctime>

// Константы для вычисления процентов
const float SimpleInterest = 0.10;
const float CompoundInterest = 0.05;
const short SECS = 2;	// Секунды для создания мини-паузами между рассчетами

int main() {
	using namespace std;

	// Начальная сумма Дафны и ее текущий баланс
	const double DafnaInitBalance = 100;
	double dafna_wallet = DafnaInitBalance;

	// Кошелек Клео
	double kleo_wallet = 100;

	// Количество пройденных лет
	short years = 0;

	// Инициализация таймера и преобразование секунд в тики
	clock_t delay = SECS * CLOCKS_PER_SEC;

	do {
		// Расчет данных в кошельках
		dafna_wallet += (SimpleInterest * DafnaInitBalance);
		kleo_wallet += (CompoundInterest * kleo_wallet);
		years++;

		// Вывод текущих значений
		cout << "Daphne's wallet = " << dafna_wallet << endl;
		cout << "Kleo's wallet = " << kleo_wallet << endl;
		cout << "It's been years = " << years << endl << endl;

		// Старт мини-паузы
		clock_t start = clock();
		while (clock() - start < delay);

	} while (kleo_wallet <= dafna_wallet);

	cout << "\nIt would take " << years << " years for Cleo's balance "
		<< "to be greater than Daphne's\n";

	return 0;
}
