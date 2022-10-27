#include <stdio.h>
#include <stdlib.h>

int main(){

    int n;
    int max, min; 
    scanf("%d ",&n);
    int* ptr = (int*) malloc(n*sizeof(int)); 

    for (int i=0;i<n-1;i++){
        scanf("%d \n", &ptr[i]);
    }

    max = ptr[0];
    min = ptr[0];

    for(int i=0; i<n-1; i++)
    {
        if(ptr[i]>max)
        {
            max = ptr[i];
        }


        if(ptr[i]<min)
        {
            min = ptr[i];
        }
    }
    printf("Min: %d\n", min);
    printf("Max: %d\n", max);
    

    return 0;
}