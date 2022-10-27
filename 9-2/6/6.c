#include <stdio.h>
int c(int n, int r){
    if(r>n) return 0;
    if(r==0 || n==1) return 1;
    return c(n-1, r-1)+c(n-1, r);
}
int main(){
    int n, r;
    scanf("%d %d", &n, &r);
    printf("%d", c(n, r));
}