#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{

    char str1[10], str2[10];
    scanf("%s %s", str1, str2); ///for taking in two word
    printf("str1: %s\n", str1); /// A
    printf("str2: %s\n", str2); /// A

    printf("length of str1: %ld\n",strlen(str1));
    printf("length of str2: %ld\n",strlen(str2));
    strncat(str1,str2,strlen(str2));
    printf("str1+str2: %s\n", str1);

    if(strcmp(str1,str2) == 0){
        printf("same\n");
    }
    
    else {
        printf("not same\n");
    }
    
        return 0;
}