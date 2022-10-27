#include <stdio.h>

int main()
{
    int n; 
    scanf("%d", &n); //n =
    int* pi = &n;
    printf("%d\n",*pi); // pi = &n
    *pi = n + 10;  //n +=10
    printf("%d", *pi);

    return 0;    
}

///page 28