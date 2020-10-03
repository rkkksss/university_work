#include <bits/stdc++.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int x, y;
    cout << "x =  ";
    cin >> x;
    cout << "y =  ";
    cin >> y;
    if (x == 0 or y == 0) cout << "Ошибка, вычислить координатную четверть нельзя";
    else {
      if (x > 0) {
        if (y > 0) cout << "1 четверть";
        else cout << "4 четверть";
      }
      else if (y > 0) cout << "2 четверть";
      else cout << "3 четверть";
    }
}
