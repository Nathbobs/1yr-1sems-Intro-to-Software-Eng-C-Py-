#include <stdio.h>
int main()
{
    int i=10;
    double d =3.14;
    char c ='a';
    
    int*pi = &i;
    double*pd= &d;
    char*pc =&c;
    (*pi)++;
    (*pd)++;
    (*pc)++;
    
    printf("%d %f %c\n",i,d,c);
    
    return 0;
    
}