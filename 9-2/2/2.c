#include <stdio.h>

addTotal(int n)
{
    int i, sum;
    sum = 0;
    for (i = 0; i <= n; i++){
        sum = sum + i;
    }
    return sum;
} 
int gMul = 1;
void  mulTotal(int n)
{
    int i;
    for (i=1; i<=n ; i++){
        gMul*=i;
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    mulTotal(n);
    printf("addTotal(): %d\ngMul: %d", addTotal(n), gMul);

    return 0;
}