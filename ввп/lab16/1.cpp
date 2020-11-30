#include <bits/stdc++.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int n;
    cout << "Введите n: ";
    cin >> n;
    vector<int> a;
    int tmp = 1;
    cout << "answer: ";
    for (int i = 0; i < n; ++i) {
      a.push_back(tmp);
      cout << tmp << ' ';
      tmp += 2;
    }
}
