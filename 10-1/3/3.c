#include <stdio.h>
int main()
{
    char str[100];
    int i,len=0;
    
    scanf("%s",str);
    for(i=0; str[i]!='\0'; i++)
    {
        len++;
    }
    printf("%d",len);
    
     return 0;
}

///page 17