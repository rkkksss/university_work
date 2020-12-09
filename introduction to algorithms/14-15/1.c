#include <stdio.h>

int main() {
   int i = 1, j = 2;
   int a[] = {6, 4, 1, 0, -1, -3, -4, 9};
   int n = sizeof(a) / sizeof(int);
   while (i < n) {
        if (a[i - 1] > a[i]) {
            int tmp = a[i];
            a[i] = a[i - 1];
            a[i - 1] = tmp;
            i--;
            if (i > 0) continue;

        }
           i = j++;
    }
    for (int i = 0; i < n; i++) { 
		printf("%d ", a[i]);
	}

    return 0;
}
