#include <stdio.h> 

int gcd (int a, int b) { 
	while (a != b) 
	    if (a > b) a -= b;
	    else b -= a;
	return a;
}

int main() {
	printf("Вы хотите узнать НОД чисел a и b\n");
	printf("Введите число a\n"); 
	int a, b; 
	scanf("%d", &a); 
	printf("Введите число b\n"); 
	scanf("%d", &b); 
	printf("НОД этих чисел:\n");
	int ans = gcd(a, b); 
	printf("%d", ans); 
}
