#include <bits/stdc++.h>

using namespace std;

void func(int c) {
  switch (c) {
    case 1:
      cout << "один";
      break;
    case 2:
      cout << "два";
      break;
    case 3:
      cout << "три";
      break;
    case 4:
      cout << "четыре";
      break;
    case 5:
      cout << "пять";
      break;
    case 6:
      cout << "шесть";
      break;
    case 7:
      cout << "семь";
      break;
    case 8:
      cout << "восемь";
      break;
    case 9:
      cout << "девять";
      break;
    case 0:
      break;
    default:
    cout << "Error";
  }
}

void func_1(int c) {
  switch(c) {
    case 0:
      cout << "десять";
      break;
    case 1:
      cout << "одиннадцать";
      break;
    case 2:
      cout << "двенадцать";
      break;
    case 3:
      cout << "тринадцать";
      break;
    case 4:
      cout << "четырнадцать";
      break;
    case 5:
      cout << "пятнадцать";
      break;
    case 6:
      cout << "шестнадцать";
      break;
    case 7:
      cout << "семнадцать";
      break;
    case 8:
      cout << "восемнадцать";
      break;
    case 9:
      cout << "девятнадцать";
      break;
    default:
    cout << "Error";
  }
}

int main() {
    setlocale(LC_ALL, "Russian");
    int n, a, b, c;
    cout << "Введите число от 100 до 999: ";
    cin >> n;
    a = n / 100; //сотни
    b = n / 10 % 10; //десятки
    c = n % 10; //единицы
    cout << "a = " << a << ". b = " << b << ".c = " << c << '\n';
    switch (a) {
      case 1:
        cout << "Сто ";
        break;
      case 2:
        cout << "Двести ";
        break;
      case 3:
        cout << "Триста ";
        break;
      case 4:
        cout << "Четыреста ";
        break;
      case 5:
        cout << "Пятьсот ";
        break;
      case 6:
        cout << "Шестьсот ";
        break;
      case 7:
        cout << "Семьсот ";
        break;
      case 8:
        cout << "Восемьсот ";
        break;
      case 9:
        cout << "Девятьсот ";
        break;
      default:
      cout << "Erro";
    }

    switch (b) {
      case 1:
        func_1(c);
        break;
      case 2:
        cout << "двадцать ";
        func(c);
        break;
      case 3:
        cout << "тридцать ";
        func(c);
        break;
      case 4:
        cout << "сорок ";
        func(c);
        break;
      case 5:
        cout << "пятьдесят ";
        func(c);
        break;
      case 6:
        cout << "шестьдесят ";
        func(c);
        break;
      case 7:
        cout << "семьдесят  ";
        func(c);
        break;
      case 8:
        cout << "восемьдесят ";
        func(c);
        break;
      case 9:
        cout << "девяносто ";
        func(c);
        break;
      case 0:
        func(c);
        break;
      default:
      cout << "Error";
    }
}
