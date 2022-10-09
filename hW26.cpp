#include <iostream>
using namespace std;

	struct movies {
		string title;
		int year;
		string genre;
		unsigned int duration;
		unsigned int price;
	};
void show_movie(movies &M) {
	cout << "Название: " << M.title << endl;
	cout << "Год выхода: " << M.year << endl;
	cout << "Жанр: " << M.genre << endl;
	cout << "Продолжительность: " << M.duration << endl;
	cout << "Цена за диск: " << M.price << endl;
}
movies expensive(movies& M1, movies& M2, movies& M3) {
	if (M1.price > M2.price and M1.price > M3.price)
		return M1;
	else if (M2.price > M1.price and M2.price > M3.price)
		return M2;
	else
		return M3;
}

void update_info(movies& M) {
	int n;
	cout << "Выберите, какую информацию о фильме небходимо обновить:\n1. Название;\n";
	cout << "2. Год выхода;\n3. Жанр;\n4. Продолжительность;\n5. Цена за диск;\nВвод -> ";
	cin >> n;
	switch (n) {
		case 1: cout << "Введите новое название фильма: "; cin >> M.title; cout << endl; break;
		case 2:cout << "Введите новый год выхода фильма: "; cin >> M.year; cout << endl; break;
		case 3:cout << "Введите новый жанр фильма: "; cin >> M.genre; cout << endl; break;
		case 4:cout << "Введите новую продолжительность фильма: "; cin >> M.duration; cout << endl; break;
		case 5:cout << "Введите новую цену фильм за диск: "; cin >> M.price; cout << endl; break;
	}
	cout << "Информация обновлена.\n\n";
}

int main() {
	setlocale(LC_ALL, "Russian");

	cout << "Домашнее задание №26.\n\nЗадача №1.\n";
	
	movies film1{ "Melancholia", 2011, "fantasy", 130, 389}; 
	movies film2{ "Offret", 1986, "drama", 149, 277};
	movies film3{ "Dancer in the Dark", 2000, "musical", 140, 343};
	cout << "Первый фильм:\n";
	show_movie(film1);
	cout << "\nВторой фильм:\n";
	show_movie(film2);
	cout << "\nТретий фильм:\n";
	show_movie(film3);


	cout << "\nЗадача №2.\nСамая высокая цена у фильма: ";
	cout << expensive(film1, film2, film3).title << "\n\n";

	cout << "Задача №3.\nВыберите фильм:\n1. " << film1.title <<";\n2. " << film2.title << ";\n3. "<<film3.title << ";\nВвод -> ";
	int n;
	cin >> n;
	switch (n) {
	case 1: update_info(film1); show_movie(film1); break;
	case 2: update_info(film2); show_movie(film2); break;
	case 3: update_info(film3); show_movie(film3); break;
	default: cout << "Ошибка выбора.";
	}
	return 0;
}