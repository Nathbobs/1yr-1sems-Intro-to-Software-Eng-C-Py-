#include<stdio.h> 
void main() { 
	int array, n, i; 
	int max, min; 
	printf("Enter the number of elements: "); 
	scanf("%d", &n); 
	printf("Enter the elements: "); 
	for (i = 0; i < n; i++) 
		scanf("%d", &array[i]); 
	} 
	max = min = array[0]; 
	for (i = 1; i < n; i++) { 
		if (array[i] < min) 
			min = array[i]; 
		else if (array[i] > max) 
			max = array[i]; 
	} 
	printf("The maximum and minimum value in the array are %d and %d", max, min); 
} 