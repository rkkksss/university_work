#include <stdio.h>
int main() {
int i, x, d, j;
    int a[] = {-1, 0, -31, 4, 6, 7, 8, 3}; 
    int n = sizeof(a) / sizeof(int); 
    for (d = n / 2; d > 0; d /= 2) { 
      for (i = d; i < n; i++) {
        x = a[i]; 
        for (j = i; j >= d; j -= d) {
          if (x < a[j - d])
              a[j] = a[j - d];
          else break;
         }
      a[j] = x;
      }    
    }   
    for (int i = 0; i < n; i++)
		  printf("%d ", a[i]);
    return 0;
} 
