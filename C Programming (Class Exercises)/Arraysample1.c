#include <stdio.h>

int main()
{
    int arr[] = {2,4,6,8,10};   
    printf("len: %ld\n", sizeof(arr)/sizeof(int)); ///this prints the lenght of the array!!!

    int sum = 0;
    for (int i = 0; i<sizeof(arr)/sizeof(int); ++i) ///this is similar to range in python
    printf("%d ", arr[i]); ///arr[i] means each element i in the array

    int min = arr[0];
    int max = arr[0];
    for (int i = 0; i <sizeof(arr)/sizeof(int); i++)
    {
        if (arr[i] < min)/// if the ith element is lesser than the minimum value set, then the minimum is i
        min = arr[i];
        if (arr[i] > max)/// if the ith element is lesser than the maximum value set, then the maximum is i
        max = arr[i]; 
    }
    printf("\nmin: %d\n", min);
    printf("max: %d\n", max);

    return 0;  
}