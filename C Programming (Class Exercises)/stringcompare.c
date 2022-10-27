#include <stdio.h>
#include <string.h>

int main()
{
    char lhs[20] = "0123456789";
    char rhs[20] = "0123456789";
    printf("%d\n", !strcmp(lhs,rhs));

    return 0;
}
