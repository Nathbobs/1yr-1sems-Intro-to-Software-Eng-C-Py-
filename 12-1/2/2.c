#include <stdio.h>
struct database {
    char name[10];
    int age;
};

int main()
{
    struct database name, age;
    scanf("%s %d",&name, &age);

    printf("name: %s \nage: %d",name, age);

    return 0;
}
