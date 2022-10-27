#include <stdio.h>

int main()
{
    int num[5];
    int *pi=&num[4];

    for(int i=0; i<5; i++){
        scanf("%d", &num[i]);
    }
    
    for(int i=0; i<5;i++)
        printf("%d ", *(pi-i));/// starts reading the array from the last integer in the array


return 0; 
}