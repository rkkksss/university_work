#include <bits/stdc++.h>

using namespace std;

/*Дан целочисленный массив размера N.
 Удалить из массива все элементы, встречающиеся ровно два раза, 
 и вывести размер полученного массива и его содержимое.*/

int main() {
     setlocale(LC_ALL, "Russian");
     int n;
     cout << "Введите n: ";
     cin >> n;
			k = 0;
			a = new int[a];
			for (i = 0; i < a; i++) {
        cout << "Введите элемент массива ";
        cin >> a[i];
      }
			for (i = 0; i < a - k; i++) {
				b = 0;
				for (j = 0; j < a; j++) {
					if (a[i] == a[j]) b++;
				}
				if (b == 2) {
					k++;
					for (j = i; j < a - 1; j++) {
						swap(a[j], a[j + 1]);
					}
					i--;
				}
			}
    cout << "answer: ";
    for (int i = 0; i < a - k; i++)
        cout << a[i] << " ";
}
