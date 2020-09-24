#include <iostream>

using namespace std;

int main() {
  setlocale(LC_ALL, "Russian");
  cout << "Введите число а: ";
  long long a;
  cin >> a;
  cout << "Введите число b: ";
  long long b;
  cin >> b;
  cout << "Среднее арифметическое: " << (a * b) / 2;
  return 0;
}
