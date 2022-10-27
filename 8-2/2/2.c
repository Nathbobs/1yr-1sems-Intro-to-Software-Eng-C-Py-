#include <stdio.h>  

int main ()  {  
    char upper, lower; //declaring variables 
    int ascii, num, exit;
    char exit1[] = "!" ; 

    scanf(" %c", &lower);  //converting to uppercase
    ascii = lower - 32;  
    printf (" %c\n", ascii);  
      
    scanf(" %c", &upper); //converting to uppercase 
    ascii = upper + 32;  
    printf (" %c\n",ascii);  
    
    scanf(" %d", &num);
    ascii = num + 0;
    printf(" %d\n", ascii);

    scanf("%d", &exit);
    ascii = exit + 0;
    printf(" exit " );

    return 0;  
}  