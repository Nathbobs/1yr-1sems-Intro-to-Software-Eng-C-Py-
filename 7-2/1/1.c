#include <stdio.h>
int main() {
  int number, i;
  printf("Enter an integer: ");
  scanf("%d", &number);
  for (i = 1; i <= 9; ++i) {
    printf("%d * %d = %d \n", number, i, number*i);
  }
  return 0;
}