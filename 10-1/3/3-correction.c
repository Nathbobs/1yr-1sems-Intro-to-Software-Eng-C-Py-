#include <stdio.h>

int main()
{
    char str[100];
    scanf("%s", str);
    int len = 0;
    for (int i = 0; i<100; i++){
        if(str[i] != '\0') len += 1;
        else break;
        printf("%d\n", len);
    }

    return 0;
}