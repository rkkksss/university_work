#include <stdio.h>

int main() {
   int min;
   int arr[] = {6, 4, 1, 5, 0, -1, -3};
   int n = sizeof(arr) / sizeof(int); 
   for (int i = 0; i < n - 1; i++) {
       min = i;
        for (int j = i + 1; j < n; j++){
            if (arr[j] < arr[min])
                min = j;
        }
        int tmp= arr[i];
        arr[i] = arr[min];
        arr[min] = tmp;
    }
    for (int i = 0; i < n; i++) { 
		printf("%d ", arr[i]);
	}
    return 0;
}
