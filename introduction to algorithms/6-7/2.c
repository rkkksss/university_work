#include <stdio.h> 

int main() {
	int array[] = {-1, 4, 5, 0, 3, 2 }; 
    int n = sizeof(array) / sizeof(int);
    float k = 1.247; 
    int step = n - 1;
    while (step >= 1) { 
        int i = 0; 
        while (i < n - step) {
            if (array[i] > array[i + step]) {
                int temp = array[i];
                array[i] = array[i + step];
                array[i + step] = temp;
            }
            i++;
        }
        step /= k; 
    }

	for (int i = 0; i < n; i++)  
		printf("%d ", array[i]);
}
