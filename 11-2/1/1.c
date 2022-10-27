#include <stdio.h>
#include <string.h>
 
int main()
{
    char word[10];  
    int i,n;
    int count=0;
    
    scanf("%s", word);
    n=strlen(word);
 
    for(i=0;i<n/2;i++)  
    {
    	if(word[i]==word[n-i-1])
    	count++;
 	}
 	if(count==i)
 	    printf("This is a palindrome");
    else
        printf("This is not a palindrome");
 
 	 
     
    return 0;
}