#include <stdio.h>
#include <string.h>

int main()
{
    char lhs[20] = "hello";
    char rhs[20] = "world";

    strncat(lhs,rhs,strlen(rhs));

    printf("%s\n", lhs);

    return 0;
}