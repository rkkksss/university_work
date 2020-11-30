#include <bits/stdc++.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int n;
    cout << "Введите n: ";
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; ++i) {
      int tmp;
      cout << "Введите элемент массива ";
      cin >> tmp;
      v.push_back(tmp);
    }
    int ans = -1;
    for (int i = 0; i < n; i++) {
        if (v[i - 2] < v[i - 1] and v[i - 1] > v[i])
            ans = i - 1;
    }
    if (v[n - 1] > v[n - 2])
        ans = v[n - 1];
    if (ans == -1)
        cout << "Локального максимума нет";
    else
        cout << "Номер последнего локального максимума = " << ans;
}
