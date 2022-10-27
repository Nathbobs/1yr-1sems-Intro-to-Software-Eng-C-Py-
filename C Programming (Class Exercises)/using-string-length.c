#include <stdio.h>
#include <string.h>


int main()
{
    char str[] = "abcde";
    printf("%ld\n", strlen(str));
    printf("%ld\n", strlen("asdf"));

    return 0;
}