#include <stdio.h>

void square(float* num){
    *num = ((*num) * (*num));
}
int main()
{
    float num1;
    scanf("%f",&num1);
    float dvar = scanf("%f",&num1);
    square(&dvar);
    printf("%.5f\n", dvar);

    return 0;

}