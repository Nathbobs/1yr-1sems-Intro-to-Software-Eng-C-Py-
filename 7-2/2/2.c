#include <stdio.h>

int main ()
{
        int number;
        int count = 1;
        int table;

        printf("Enter an integer: ");
        scanf("%i", &number);

        while (count <=9)
                {
                    table = number * count;
                    printf("%i * %i = %i\n", number, count, table);
                    count += 1;
                }
return 0;
}