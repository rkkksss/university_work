#include <stdio.h>

int main(){
    int i = 0;
    int j = 0;
    int a[] = {3, 5, 2, 1, 6, 4, 7};  
    int n = sizeof(a) / sizeof(int);  
    while (i < n - 1) {  
        while (j < n - 1 - i) {  
            if (a[j] > a[j + 1]) {  
                int tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
            }
            j++;  
        }
        j = 0;  
        i++; 
    }
    for (int i = 0; i < n; i++) 
        printf("%d ", a[i]);
}
