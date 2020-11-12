#include <bits/stdc++.h>

using namespace std;

double pow3 (double a) {
    double b = a * a * a;
    return b;
}

int main() {
    setlocale(LC_ALL, "Russian");
    for (int i = 0; i < 5; ++i) {
        double a;
        cout << "a =  ";
        cin >> a;
        cout << a << "^3 = " << pow3(a) << '\n';
    }
}
