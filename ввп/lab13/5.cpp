#include <bits/stdc++.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int a, n;
    cout << "Введите a: ";
    cin >> a;
    cout << "Введите n: ";
    cin >> n;
    int s = 1;
    int p = 1;
    for (int i = 0; i <= n; ++i) {
      p = - p * a;
      s += p;
    }
    cout << "Ответ: " << s;
}
