// BMI Calculation Software
#include <iostream>

int main() {
	using namespace std;

	double lbs, feet, inches;
	double meters, kg;
	double bmi; // Индекс массы тела
	const int coeff_f_i{ 12 };		// Коэффициент (1 фут = 12 дюймов)
	const double coeff_m{ 0.0254 };	// Коэффициент (1 дюйм = 0.254)
	const double coff_kg{ 2.2 };		// Коэффициент (1 кг = 2.2 фунтам)

	cout << "Enter lbs value: ";
	cin >> lbs;

	cout << "Enter feet value: ";
	cin >> feet;

	cout << "Enter inches value: ";
	cin >> inches;

	inches = (double(coeff_f_i) * feet) + inches;	// Преобразование футов в дюймы
	meters = inches * coeff_m;	// Преобразование дюймов в метры
	kg = lbs / coff_kg; // Преобразование фунтов в кг

	bmi = kg / (meters * meters);

	cout << "BMI = " << bmi << endl;

	return 0;
}
