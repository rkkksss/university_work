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
      cout << "Введите элемент массива a: ";
      cin >> tmp;
      v.push_back(tmp);
      if (tmp < 0) {
        v.push_back(0);
      }
    }
	  n = v.size();
    cout << "answer: ";
    for (int i = 0; i < n; i++)
        cout << v[i] << " ";
}
