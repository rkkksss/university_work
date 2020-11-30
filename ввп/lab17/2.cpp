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
    bool a = true;
    for (int i = 2; i < n; i++)
       if (v[i] - v[i-1] != v[i-1] - v[i-2])
           a = false;
    if (a == true)
       cout << "Массив содержит арифметическую прогрессию. \nРазность = " << v[2]-v[1];
    else
       cout << "0";
}
