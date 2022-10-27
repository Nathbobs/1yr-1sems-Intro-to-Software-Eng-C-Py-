///printing numbers in decimal, octadecimal and hexadecimal

#include <stdio.h>
int main()
{
    int num1 = 1O; //decimal number
    int num2 = OxA; //hexadecimal number
    int num3 = O12; //octal number

    //print num1,num2,num3 in decimal
    printf("%d/n", num1 );
    printf("%d/n", num2 );
    printf("%d/n", num3 );

    printf("%x/n", num1 );  //print num1 in hexadecimal
    printf("%o/n", num1 );  //print num1 in octal
    return 0;
    
}