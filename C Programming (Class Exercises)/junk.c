#include <stdio.h> 
 
int main() 
{ 
	int n,i; 
	int sum = 0; 
	printf("Enter a number: "); 
	scanf("%d",&n); 
	for(i=1;i<=n;i++) 
	{ 
		sum = sum + i; 
	} 
	printf("The sum of first n numbers is %d",sum); 
	return 0; 
} 