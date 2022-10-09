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
	cout << "��������: " << M.title << endl;
	cout << "��� ������: " << M.year << endl;
	cout << "����: " << M.genre << endl;
	cout << "�����������������: " << M.duration << endl;
	cout << "���� �� ����: " << M.price << endl;
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
	cout << "��������, ����� ���������� � ������ ��������� ��������:\n1. ��������;\n";
	cout << "2. ��� ������;\n3. ����;\n4. �����������������;\n5. ���� �� ����;\n���� -> ";
	cin >> n;
	switch (n) {
		case 1: cout << "������� ����� �������� ������: "; cin >> M.title; cout << endl; break;
		case 2:cout << "������� ����� ��� ������ ������: "; cin >> M.year; cout << endl; break;
		case 3:cout << "������� ����� ���� ������: "; cin >> M.genre; cout << endl; break;
		case 4:cout << "������� ����� ����������������� ������: "; cin >> M.duration; cout << endl; break;
		case 5:cout << "������� ����� ���� ����� �� ����: "; cin >> M.price; cout << endl; break;
	}
	cout << "���������� ���������.\n\n";
}

int main() {
	setlocale(LC_ALL, "Russian");

	cout << "�������� ������� �26.\n\n������ �1.\n";
	
	movies film1{ "Melancholia", 2011, "fantasy", 130, 389}; 
	movies film2{ "Offret", 1986, "drama", 149, 277};
	movies film3{ "Dancer in the Dark", 2000, "musical", 140, 343};
	cout << "������ �����:\n";
	show_movie(film1);
	cout << "\n������ �����:\n";
	show_movie(film2);
	cout << "\n������ �����:\n";
	show_movie(film3);


	cout << "\n������ �2.\n����� ������� ���� � ������: ";
	cout << expensive(film1, film2, film3).title << "\n\n";

	cout << "������ �3.\n�������� �����:\n1. " << film1.title <<";\n2. " << film2.title << ";\n3. "<<film3.title << ";\n���� -> ";
	int n;
	cin >> n;
	switch (n) {
	case 1: update_info(film1); show_movie(film1); break;
	case 2: update_info(film2); show_movie(film2); break;
	case 3: update_info(film3); show_movie(film3); break;
	default: cout << "������ ������.";
	}
	return 0;
}