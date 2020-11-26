#include <bits/stdc++.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int a, b;
    cout << "a =  ";
    cin >> a;
    cout << "b =  ";
    cin >> b;
    if ((a > 2) and (b <= 3)) {
      cout << "Справедливы неравенства A > 2 и B ≤ 3";
    }
    else {
      cout << "Не справедливы неравенства A > 2 и B ≤ 3";
    }
}
