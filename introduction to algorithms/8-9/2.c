#include <stdio.h>

int main() {
    int array[] = { 1, 2, 0, -1, -2, 4, 6, 7, 8, 3}; 
    int n = sizeof(array) / sizeof(int); 
    for (int i = 0; i < n; i++) { 
        int x = array[i]; 
        int j = i; 
    	while (j > 0 && x < array[j - 1]) { 
            array[j] = array[j - 1]; 
            j--; 
        }
        array[j] = x; 
    }
    
    for (int i = 0; i < n; i++)
		  printf("%d ", array[i]);
    return 0;
} 
