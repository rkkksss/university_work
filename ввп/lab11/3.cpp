#include <bits/stdc++.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int a, b, c;
    cout << "a =  ";
    cin >> a;
    cout << "b =  ";
    cin >> b;
    cout << "c =  ";
    cin >> c;
    b = abs(b - a);
    c = abs(c - a);
    if (b < c) cout << "Ближе к a лежит точка b. Расстояние: " << b << '\n';
    else if (c < b) cout << "Ближе к a лежит точка c. Расстояние: " << c << '\n';
    else cout << "b и c находятся от a на одинаковом расстоянии " << b << '\n';
}
