#include <stdio.h>
#include <string.h>
int main()
{
    char lhs[20]="0123456789";  ///we use this method to copy a string in a variable to another variable(empty or not)
    char rhs[20];               
  
    strncpy(rhs,lhs, strlen(lhs)); ///note that the strlen(lhs) is the count/(up to what variable to be copied)
                                ///(to,from,count);
    printf("lhs: %s\n",lhs);
    printf("rhs: %s\n",rhs);
    return 0;
}