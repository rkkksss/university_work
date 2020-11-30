#include <stdio.h> 

int main() {
	printf("Вы хотите посчитать выражение x * 2 + 3 / x\n"); 
	printf("Введите число x\n"); 
	float x; 
	scanf("%f", &x); 
	if (x == 3) { 
		printf("Результат не определен"); 
	} 
	else { 
		x = x * 2 + 3 / x; 
		printf("Результат выражения = "); 
		printf("%f", x); 
	}
}
