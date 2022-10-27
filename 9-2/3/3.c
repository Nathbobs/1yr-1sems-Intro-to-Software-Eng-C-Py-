#include <stdio.h>

int recursive(int n);

int main() {

  int num;
  scanf("%d", &num);
  printf("%d", recursive(num));
  return 0;
}

int recursive(int n) {
  if (n != 0)
    return n + recursive(n - 1);
  else
    return n;
}
