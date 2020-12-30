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
      if (tmp > 0) {
        v.push_back(0);
      }
      v.push_back(tmp);
    }
    cout << "answer: ";
	  n = v.size();
    for (int i = 0; i < n; i++)
        cout << v[i] << " ";
}
