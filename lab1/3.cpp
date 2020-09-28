#include <iostream>

using namespace std;

int main() {
  setlocale(LC_ALL, "Russian");
  cout << "Введите число а: ";
  float a;
  cin >> a;
  cout << "Введите число b: ";
  float b;
  cin >> b;
  cout << "Среднее арифметическое: " << (a + b) / 2 << '\n';
  return 0;
}
