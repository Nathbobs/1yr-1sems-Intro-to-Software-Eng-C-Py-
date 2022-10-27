#include <stdio.h>

int main(){
    int num[5];
    
    for (int i=0; i<5; i++){
        scanf("%d", &num[i]);/// collect each i input up to 5
    }
    
    int sum = 0;
    int min = num[0];
    int max = num[0];
    
    for (int i = 0; i< sizeof(num)/sizeof(int);i++){
        sum = sum + num[i];/// sum it all up
    }
    for (int i = 0; i< sizeof(num)/sizeof(int);i++)
    {
        if (num[i] < min)/// if the ith element is lesser than the minimum value set, then the minimum is i
        min = num[i];
        if (num[i] > max)/// if the ith element is lesser than the maximum value set, then the maximum is i
        max = num[i]; 
        
    }

    printf("min: %d\n", min);
    printf("max: %d\n", max);
    printf("sum: %d",sum);

    return 0;  
}