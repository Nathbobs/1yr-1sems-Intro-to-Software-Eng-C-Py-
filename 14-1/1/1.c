#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int xpos;
    int ypos;
} Point ;

int main(){

    Point* pi = (Point*)malloc(sizeof(Point));

    scanf("%d %d",&pi[0].xpos,&pi[0].ypos);
    printf("%d %d\n",pi[0].xpos, pi[0].ypos);

    free(pi);
    return 0;
}