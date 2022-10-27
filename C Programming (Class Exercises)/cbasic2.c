#include <stdio.h>

int main()
{
    int num1, num2, num3, num4;
    scanf("%d %d %d %d ", &num1, &num2, &num3, &num4);

    int num5 = (num1--) + 1;
    printf("%d\n", --num1);
    printf("%d\n", num2++);
    printf("%d\n", num5);
    printf("%d\n", num3<num4);

    return 0;
}