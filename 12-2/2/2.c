#include <stdio.h>

typedef struct
{
    char name[7];
    int score;
    int stdnum;
} Person[3];


int main() {
    int i;

    for (i = 0; i < 3; ++i) {
        scanf("%s\n", &Person[i].name,&Person[i].score);
        printf("%s\n", &Person[i].name,&Person[i].score);

    }
    return 0;
}

