#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void make_array(int array[], int n) {
	for (int i = 0; i < n; ++i) {
		array[i] = rand() % 90 + 10;
	}
}

void solve(int array[], int n, void (*f)(int[], int), char* name) {
    clock_t start = clock();
    f(array, n);
	clock_t end = clock();
	printf("\nВремя работы %s: ", name);
	printf("%f ", 1.0*(end - start)/CLOCKS_PER_SEC);
}

// 4-5. Bubble sort
void bubble_sort(int array[], int n) {
  int i = 0;
  int j = 0;
  while (i < n - 1) {
      while (j < n - 1 - i) {
          if (array[j] > array[j + 1]) {
              int tmp = array[j];
              array[j] = array[j + 1];
              array[j + 1] = tmp;
          }
          j++;
      }
      j = 0;
      i++;
  }
}

// 6-7. Comb sort
void comb_sort(int array[], int n) {
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
}

// 8-9. Insertion sort
void insertion_sort(int array[], int n) {
  for (int i = 0; i < n; i++) {
        int x = array[i];
        int j = i;
    	while (j > 0 && x < array[j - 1]) {
            array[j] = array[j - 1];
            j--;
        }
        array[j] = x;
    }
}

// 10-11. Shell sort
void shell_sort(int array[], int n) {
   int i, x, d, j;
   d = n / 2;
   while (d > 0) {
       i = d;
      while (i < n) {
       x = array[i];
       j = i;
       while (j >= d) {
         if (x < array[j - d]) {
           array[j] = array[j - d];
           j = j - d;
         }
         else break;
       }
       array[j] = x;
       i++;
     }
     d = d / 2;
   }
}

// 12-13. Selection sort
void selection_sort(int array[], int n) {
  int min, tmp, i = 0, j;
  while (i < n - 1) {
      j = i + 1;
      min = i;
       while(j < n) {
           if (array[j] < array[min]) {
               min = j;
           }
           j++;
       }
       tmp = array[i];
       array[i] = array[min];
       array[min] = tmp;
       i++;
   }
}

// 14-15. Gnome sort
void gnome_sort(int array[], int n) {
  int i = 1, j = 2;
   while (i < n) {
        if (array[i - 1] > array[i]) {
            int tmp = array[i];
            array[i] = array[i - 1];
            array[i - 1] = tmp;
            i--;
            if (i > 0) continue;

        }
           i = j++;
    }
}


// 16-17. Quick sort
void quick_sort(int array[], int first, int last) {
  if (first < last) {
        int piv = array[(first + last) / 2];
        int left = first;
        int right = last;
        do {
            while (array[left] < piv) left++;
            while (array[right] > piv) right--;
            if (left <= right) {
                int tmp = array[left];
                array[left] = array[right];
                array[right] = tmp;
                left++;
                right--;
            }
        }
        while (left <= right);
        quick_sort(array, first, right);
        quick_sort(array, left, last);
    }
}

void run_quicksort(int array[], int n) {
	quick_sort(array, 0, n - 1);
}

int main() {
	printf("Введите размер массива: ");
    int n;
	scanf("%d", &n);
	int array[n];
	make_array(array, n);
	solve(array, n, &bubble_sort, "сортировки пузырьком");

	make_array(array, n);
	solve(array, n, &comb_sort, "сортировки расческой");

	make_array(array, n);
	solve(array, n, &insertion_sort, "сортировки вставками");

	make_array(array, n);
	solve(array, n, &shell_sort, "сортировки shell");

	make_array(array, n);
	solve(array, n, &selection_sort, "сортировки выбором");

	make_array(array, n);
	solve(array, n, &gnome_sort, "гномьей сортировки");

	make_array(array, n);
	solve(array, n, &run_quicksort, "быстрой сортировки");
    return 0;
}
