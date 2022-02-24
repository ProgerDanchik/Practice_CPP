#include <iostream>

// Структура коробки
struct box {
	char maker[40];
	float height;
	float width;
	float length;
	float volume;
};

// Прототипы функций
void show_box(box strct);
void set_volume(box* pt);

int main() {

	box strct = {
		"Red Box",
		140,
		50,
		75,
		0
	};

	show_box(strct);
	set_volume(&strct);
	show_box(strct);
}

// Функция отображения данных структуры
void show_box(box strct) {
	using namespace std;

	cout << strct.maker << endl;
	cout << strct.height << endl;
	cout << strct.width << endl;
	cout << strct.length << endl;
	cout << strct.volume << endl << endl;
}

// Функция установки значения volume для box структуры
void set_volume(box* pt) {
	pt->volume = pt->height * pt->width * pt->length;
}
