#include <stdio.h>

int add(int a)
{
    static int num=0;
    num+=a;
        return num;
}

int main()
{
    int num;
    for (int i=0;i<5; ++i)
            num=add(i);
    printf("%d\n",num);
    
    return 0;
}