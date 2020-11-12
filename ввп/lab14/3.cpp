#include <bits/stdc++.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int n;
    cout << "N = ";
    cin >> n;
    int sum = 1;
    int k = 1;
    while (sum < n) {
      k++;
      sum += k;
    }
    cout << "K = " << k << ", sum = " << sum;
}
