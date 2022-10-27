#include <stdio.h>
#include <string.h>
 
int main()
{
    char word[10];  
    int  i,j,n;
    int count=0;
 
    scanf("%s", word);
     
    for(i=0;word[i];i++);
	 n=i; 
 
    for(j=0;j<n;j++)  
    {
     	count=1;
    	if(word[j])
    	{
 		  for(i=j+1;i<n;i++)  
	      {   
	        if(word[j]==word[i])
    	    {
                 count++;
                 word[i]='\0';
	     	}
	      }  
	      printf(" '%c' : %d \n",word[j],count); 
       }   
 	} 
 	   
    return 0;
}
