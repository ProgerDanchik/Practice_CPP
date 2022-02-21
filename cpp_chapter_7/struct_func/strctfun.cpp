// strctfun.cpp -- функции с аргументами-структурами
#include <iostream>
#include <cmath>

// Объявление структур
struct polar {
	double distance;		// расстояние от исходной точки
	double angle;			// направление от исходной точки
};

struct rect {
	double x;				// расстояние по горизонтали от исходной точки
	double y;				// расстояние по вертикали от исходной точки
};

// Прототипы
polar rect_to_polar(rect xypos);
void show_polar(polar dapos);

int main() {
	using namespace std;

	rect rplace;
	polar pplace;

	cout << "Enter the x and y values: ";			// ввод значений x и y

	while (cin >> rplace.x >> rplace.y) {			// ловкое использование cin
		pplace = rect_to_polar(rplace);
		show_polar(pplace);
		cout << "Next two numbers (q to quit): ";
			// Ввод следующих двух чисел (q для завершения)
	}

	cout << "Done.\n";
	return 0;
}

// Преобразование прямоугольных координат в полярные
polar rect_to_polar(rect xypos) {
	using namespace std;
	polar answer;

	answer.distance =
		sqrt(xypos.x * xypos.x + xypos.y * xypos.y);
	answer.angle = atan2(xypos.y, xypos.x);

	return answer;
}

// Отображение полярных координат с преобразованием радиан в градусы
void show_polar(polar dapos) {
	using namespace std;

	const double RAD_TO_DEG = 57.29577951;

	cout << "distance = " << dapos.distance
		<< ", angle = " << dapos.angle * RAD_TO_DEG
		<< " degrees\n";
}
