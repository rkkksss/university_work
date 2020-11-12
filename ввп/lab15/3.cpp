#include <bits/stdc++.h>

using namespace std;

double rings (double r1, double r2) {
    return 3.14 * (r1 * r1 - r2 * r2);
}

int main() {
    setlocale(LC_ALL, "Russian");
    for (int i = 0; i < 3; ++i) {
        double a, b;
        cout << "R1 =  ";
        cin >> a;
        cout << "R2 =  ";
        cin >> b;
        cout << "S = " << rings(a, b) << '\n';
    }
}
