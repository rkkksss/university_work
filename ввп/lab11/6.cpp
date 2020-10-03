#include <bits/stdc++.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int n;
    cout << "Введите целое число от 1 до 999: ";
    cin >> n;
    if (n % 2 == 0) cout << "Чётное ";
    else cout << "Нечётное ";
    if (n < 10) cout << "однозначное число";
    else if (n > 9 and n < 100) cout << "двузначное число";
    else cout << "трёхзначеное число";
}
