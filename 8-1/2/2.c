#include <stdio.h>

int maxNum (int num1, int num2, int num3){

    int maxN;
    if (num1 >= num2 && num1 >= num3)
    maxN = num1;
    if (num2 >= num1 && num2 >= num3)
    maxN = num2;
    if (num3 >= num1 && num3 >= num2)
    maxN = num3;

  return maxN;
}

int minNum (int num1,int num2,int num3){

    int minN;
    if (num1 <= num2 && num1 <= num3)
    minN = num1;
    if (num2 <= num1 && num2 <= num3)
    minN = num2;
    if (num3 <= num1 && num3 <= num2)
    minN = num3;

  return minN;
}

int main() {
  int num1, num2, num3 ;
  scanf("%d %d %d", &num1, &num2, &num3);
  printf("min : %d \n max : %d \n", minNum(num1, num2, num3), maxNum(num1, num2, num3));

  return 0;
}