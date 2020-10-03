#include <bits/stdc++.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    string s, s1;
    cout << "Введите целое четырехзначное число: ";
    cin >> s;
    s1 = s;
    reverse(s1.begin(), s1.end());
    if (s == s1) {
      cout << "Число является палиндромом";
    }
    else cout << "Не является палиндромом";
}
