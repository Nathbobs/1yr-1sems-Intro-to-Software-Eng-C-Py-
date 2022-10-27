#include <stdio.h>

int main()
{
    double sum = 0;
    double num[5];
    double *parr=num;

    for (int i=0; i<5; i++)
        scanf("%lf", &num[i]);
    
    for (int i = 0; i < 5; i++){
        printf("%lf\n", (*parr+i)*2);
        sum = sum + (*(parr+i)*2);
    }    
        printf("%lf", sum);
return 0;
}

