#include <bits/stdc++.h>

using namespace std;

int quarter (double x double y) {
    if (x > 0) {
      if (y > 0) return 1;
      if (y < 0) return 4;
    }
    else {
      if (x < 0) {
        if (y > 0) return 2;
        if (y < 0) return 3;
    }
}

int main() {
    setlocale(LC_ALL, "Russian");
    for (int i = 0; i < 3; ++i) {
        double a, b;
        cout << "x =  ";
        cin >> a;
        cout << "y =  ";
        cin >> b;
        int num = quarter(a, b);
        cout << "Номер четверти : " << quarter(a, b) << '\n';
    }
}
