#include <bits/stdc++.h>

using namespace std;

double f(double x) { //функция из задания
	return log10(1 + 2 * x) - 2 + x;
}

int main() {
	double left, right, mid, fx, eps;
	cout << "Введите значение левой границы: "; 
	cin >> left;
	cout << "Введите значение правой границы: ";
	cin >> right;
	cout << "Введите значение погрешности: ";
	cin >> eps;
	long long i = 0; // счетчик итераций
	while (abs(f(left)) > eps || abs(f(right)) > eps) { 
		i++;  
		mid = (left + right) / 2;
		fx = f(mid); 
		if (fx > 0) right = mid; 
		else left = mid;  
	}
	cout << "Значение х = " << mid << '\n';
	cout << "Точность = " << (abs(right - left)) << '\n';
	cout << "Количество итераций = " << i << '\n';
}
