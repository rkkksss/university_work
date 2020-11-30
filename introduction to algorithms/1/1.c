#include <stdio.h>
int main() {
  printf("Вы хотите посчитать выражение x * 2 + x / 3\n"); 
  printf("Введите число x\n"); 
  float x; 
  scanf("%f", &x); 
  x = x * 2 + x / 3; 
  printf("Результат выражения = "); 
  printf("%f", x); 
}
