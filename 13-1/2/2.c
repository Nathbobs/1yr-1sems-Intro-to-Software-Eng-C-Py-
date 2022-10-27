#include<stdio.h>
int main(){

   int n[3][2];

   int i, j;
   for(i=0; i<3; i++) {
      for(j=0;j<2;j++) {
         scanf("%d", &n[i][j]);
      }
   }

   for(i=0; i<3; i++) {
      for(j=0;j<2;j++) {
         printf("%d ", n[i][j]);
         if(j==3){
            printf("\n");
         }
      }
   }
   return 0;
}