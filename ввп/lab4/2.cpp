#include <iostream>

using namespace std;

int main() {
  setlocale(LC_ALL, "Russian");
  cout << "Введите диаметр d: ";
  float d;
  cin >> d;
  float pi = 3.14;
  if (d < 0) {
    cout << "Ошибка, число должно быть положительным.";
  }
  else {
    cout << "Длина окружности: " << pi * d;
  }
  return 0;
}
