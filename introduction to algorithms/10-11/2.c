#include <stdio.h>

int main() {
    int i, x, d, j;
    int a[] = {-1, 0, -31, 4, 6, 7, 8, 3}; 
    int n = sizeof(a) / sizeof(int); 
    d = n / 2; 
    while (d > 0) { 
        i = d;
    	 while (i < n) { 
    		x = a[i];  
    		j = i; 
    		while (j >= d) { 
    			if (x < a[j - d]) { 
    				a[j] = a[j - d]; 
    				j = j - d;
    			}
    			else break;
    		}
    		a[j] = x;
    		i++; 
    	}
    	d = d / 2;
    } 
    for (int i = 0; i < n; i++) { 
		  printf("%d ", a[i]);
  	}
    return 0;
}
