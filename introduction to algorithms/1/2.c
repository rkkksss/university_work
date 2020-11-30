#include <stdio.h> 
int main() {
  printf("Вы хотите посчитать выражение x * 2 + x / 3\n");
  printf("Введите целое число x\n"); 
  int x; 
  scanf("%f", &x); 
  float y = (float)x; 
  y = y * 2 + y / 3;
  printf("Результат выражения = ");
  printf("%f", y);
}
