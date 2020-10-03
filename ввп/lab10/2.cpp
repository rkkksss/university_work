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
    if ((a < b) and (b < c)) cout << "Справедливо двойное неравенство A < B < C";
    else cout << "Не справедливо двойное неравенство A < B < C";
}
