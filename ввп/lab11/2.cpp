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
    cout << (max(max(a + b, a + c), b + c));
}
