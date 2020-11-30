#include <bits/stdc++.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int n, a, d;
    cout << "Количество членов геометрической прогрессии: ";
    cin >> n;
    cout << "Первый член геометрической прогрессии: ";
    cin >> a;
    cout << "Знаменатель геометрической прогрессии: ";
    cin >> d;
    vector<int> v;
    v.push_back(a);
    cout << "answer: ";
    for (int i = 1; i < n; ++i) {
      cout << v[i] << ' ';
      int tmp = v[i - 1] * d;
      v.push_back(tmp);
    }
}
