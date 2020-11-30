#include <stdio.h> 
  int main() {
  int a[] = {3, 5, 2, 1, 6, 4, 7}; 
  int n = sizeof(a) / sizeof(int); 
  for (int i = 0; i < n - 1; i++) 
    for (int j = 0; j < n - 1 - i; j++) 
      if (a[j] > a[j+1]) { 
        int tmp = a[j];
        a[j] = a[j + 1];
        a[j + 1] = tmp;
  }
  for (int i = 0; i < n; i++)
    printf("%d ", a[i]);
}
