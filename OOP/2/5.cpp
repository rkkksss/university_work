#include <iostream>

using namespace std;

int main() {
  int n = 20;
  int w = 2 * n - 1;
  for (int i = 1; i <= n; ++i) {
      int p = w - (2 * i - 1);
      for (int j = 1; j <= w; j++) {
          cout << ((j <= p) ? ' ' : 'X');
      }
      cout << endl;
    }
    return 0;
}
