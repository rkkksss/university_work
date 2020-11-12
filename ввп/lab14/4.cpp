#include <bits/stdc++.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int p;
    cout << "P = ";
    cin >> p;
    int sum = 1000;
    int k = 0;
    while (sum <= 1100) {
      sum += (sum * p / 100);
      k++;
    }
    cout << "Количество мессяцев = " << k << '\n';
    cout << "Конечный размер вклада = " << sum;
}
