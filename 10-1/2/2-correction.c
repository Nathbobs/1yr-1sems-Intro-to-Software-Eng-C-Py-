#include <stdio.h>

int main()
{
    ///initialize and print 3 variables

    int i; double d; char c;
    scanf("%d %lf %c",&i,&d,&c);

    printf("i: %d, %p\n", i , &i);
    printf("d: %lf, %p\n", d, &d);
    printf("c: %c, %p\n", c, &c);

    ///initialize 3 pointer variables
    int* pi = &i;
    double* pd = &d;
    char* pc = &c;

    ///increase and print the values

    *pi +=1; *pd += 1; *pc +=1;

    printf("i+1: %d\n", *pi);
    printf("d+1: %lf\n", *pd);
    printf("c+1: %c\n", *pc);

    ///print the size of the pointer variables
    ///%lu can be used of unsigned, return type of the sizeof().
    

    printf("size of pi: %lu\n ", sizeof(pi));
    printf("size of pd: %lu\n ", sizeof(pd));
    printf("size of pc: %lu\n ", sizeof(pc));


    return 0;
    
}