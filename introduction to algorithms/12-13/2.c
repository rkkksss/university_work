#include <stdio.h>

int main() {
   int min, tmp, i = 0, j;
   int arr[] = {6, 4, 1, 5, 0, -1, -3};
   int n = sizeof(arr) / sizeof(int); 
   while (i < n - 1) {
       j = i + 1;
       min = i;
        while(j < n) {
            if (arr[j] < arr[min]) {
                min = j;
            }
            j++;
        }
        tmp = arr[i];
        arr[i] = arr[min];
        arr[min] = tmp;
        i++;
    }
    for (int i = 0; i < n; i++) { 
		printf("%d ", arr[i]);
	}
    return 0;
}
