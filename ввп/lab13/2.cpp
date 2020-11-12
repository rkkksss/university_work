#include <bits/stdc++.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    double n;
    cout << "Введите n: ";
    cin >> n;
    double ans = 1;
    for (int i = 0; i < n; ++i) {
      ans = ans * (1 + i / 10);
    }
    cout << ans;
}
