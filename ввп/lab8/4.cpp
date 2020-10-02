#include <bits/stdc++.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    string a;
    cout << "Введите a: ";
    cin >> a;
    reverse(a.begin(), a.end());
    cout << "Перестановка а: " << a;
}
