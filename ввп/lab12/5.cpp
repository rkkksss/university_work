#include <bits/stdc++.h>
using namespace std;

int main() {
  int year, n;
	setlocale(LC_ALL, "Russian");
	string variant1[] = {"зелёного", "красного", "жёлтого", "белого", "черного"};
	string variant2[] = {"зелёной", "красной", "жёлтой", "белой", "черной"};
	string animal[] = {"крысы", "коровы", "тигра", "зайца", "дракона", "змеи", "лошади", "овцы", "обезьяны", "курицы", "собаки", "свиньи"};
	cout << "Введите год: ";
	cin >> year;
	cout << year << " год - ";
	year += 56;
	n = (year % 60) / 12;
	year = year % 12;
	if (year == 2 || year == 3 || year == 4) cout << " год " <<  variant1[n] << " " << animal[year] << '.';
	else cout << " год " <<  variant2[n] << " " << animal[year] << ".";
}
