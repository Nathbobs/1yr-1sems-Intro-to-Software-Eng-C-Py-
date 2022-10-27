#include <stdio.h>

int main()
{
    int n;
    double m;
    char o;

    scanf("%d%lf%c", &n, &m, &o);
    int i = n;
    double d = m;
    char c = o; 
    printf("i: %d, %p", i, i);
    printf("d: %lf, %p", d, d);
    printf("c: %c, %p\n", c, c);

    int* pi = &i;
    *pi = i + 1; 
    printf("i+1: %d", *pi);
    
    double* pd = &d;
    *pd = d + 1; 
    printf("d+1: %lf", *pd);

    char* pc = &c;
    *pc = c + 1; 
    printf("c+1: %c\n", *pc);


    printf("size of pi: %d ", sizeof(pi));
    printf("size of pi: %d ", sizeof(pd));
    printf("size of pi: %d ", sizeof(pc));

    return 0;
    

}