#include <stdio.h>

void qsort(int* arr, int b, int e) {
    if (b < e) {
        int piv = arr[(b + e) / 2]; 
        int l = b;
        int r = e;
        do {
            while (arr[l] < piv) l++; 
            while (arr[r] > piv) r--;
            if (l <= r) {
                int tmp = arr[l];   
                arr[l] = arr[r];
                arr[r] = tmp;
                l++; 
                r--;
            }
        }
        while (l <= r);
        qsort(arr, b, r);
        qsort(arr, l, e);
    }
}

int main() {
    int b, e, l, r;
    int a[] = {-3, -12, 0, 21, 3, 1, -2}; 
    int n = sizeof(a) / sizeof(int);
    qsort(a, 0, n - 1);
    for (int i = 0; i < n; i++) { 
		printf("%d ", a[i]);
	}
}
