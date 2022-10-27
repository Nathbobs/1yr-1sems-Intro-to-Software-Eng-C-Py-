#include <stdio.h>
int main(){
    int n[3][2];
    int m;
    scanf("%d ",&m);

    for (int row=0; row <3; row++)
    {
        printf("%d ", row);
        for (int col=0; col<2;col++)
            printf("%d ",n[row][col]);
            printf("\n");
    }
    return 0;
}