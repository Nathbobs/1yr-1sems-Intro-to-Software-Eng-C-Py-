#include <stdio.h>

int main()
{
    char word[10];
    int count = 0;
    scanf("%s ", word);

    for(int i = 0; word[i] != '\0'; i++){
        if( word[i])
        count++;
    }

    printf("'%s' :  %d",  count);

    return 0;


}
