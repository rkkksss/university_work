#include <stdio.h>

int main() {    
  int i, j, x;
  int a[] = {1, 2, 0, -1, -2, 4, 6, 7, 8, 3};  
  int n = sizeof(a) / sizeof(int); 
  for (i = 0; i < n; i++) { 
      for (j = i, x = a[i]; j > 0 && x < a[j - 1]; j--) { 			
        a[j] = a[j - 1];
        a[j - 1] = x; // свапаем значение предыдущего и текущего элемента
      }
      a[j] = x;
  }
  for (int i = 0; i < n; i++)	
    printf("%d ", a[i]);
}
