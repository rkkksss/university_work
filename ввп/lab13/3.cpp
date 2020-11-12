#include <bits/stdc++.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int n;
    cout << "Введите n: ";
    cin >> n;
    int res = 1;
    for (int i = 0; i <= n; ++i) {
      res += (2 * i - 1);
      cout << res << '\n';
    }
}
