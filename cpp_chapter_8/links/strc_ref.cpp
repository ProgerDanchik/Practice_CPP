// strc_ref.cpp -- использование ссылок на структуру
#include <iostream>
#include <string>

struct free_throws {
	std::string name;
	int made;
	int attempts;
	float percent;
};

void display(const free_throws& ft);
void set_pc(free_throws& ft);
free_throws& accumulate(free_throws& target, const free_throws& source);

int main() {
	using std::cout;

	/*
		Частичные инициализации - оставшиеся неинициализированными
		члены устанавливаются в 0
	*/

	free_throws one = { "Ifelse Branch", 13, 14 };
	free_throws two = { "Andor Knott", 10, 16 };
	free_throws three = { "Minnie Max", 7, 9 };
	free_throws four = { "Whily Looper", 5, 9 };
	free_throws five = { "Long Long", 6, 14 };
	free_throws team = { "Throwgoods", 0, 0 };

	// Инициализация не производится
	free_throws dup;
	set_pc(one);
	display(one);
	accumulate(team, one);
	display(team);

	// Использование возвращаемого значени в качестве аргумента
	display(accumulate(team, two));
	accumulate(accumulate(team, three), four);
	display(team);

	// Использование возвращаемого значения в присваивании
	dup = accumulate(team, five);
	cout << "Displaying team:\n";
	display(team);

	// Отображение dup после присваивания
	cout << "Displaying dup after assignment:\n";
	display(dup);
	set_pc(four);

	// Неблагоразумное присваивание
	accumulate(dup, five) = four;

	// Отображение dup после неблагоразумного присваивания
	cout << "Displaying dup after ill-advised assignment:\n";
	display(dup);

	return 0;
}

void display(const free_throws& ft) {
	using std::cout;

	cout << "Name: " << ft.name << "\n";
	cout << " Made: " << ft.made << "\t";
	cout << "Attempts: " << ft.attempts << "\t";
	cout << "Percent: " << ft.percent << "\n";
}

void set_pc(free_throws& ft) {
	if (ft.attempts != 0) {
		ft.percent = 100.0f * float(ft.made) / float(ft.attempts);
	}
	else {
		ft.percent = 0;
	}
}

free_throws& accumulate(free_throws& target, const free_throws& source) {
	target.attempts += source.attempts;
	target.made += source.made;
	set_pc(target);
	
	return target;
}
