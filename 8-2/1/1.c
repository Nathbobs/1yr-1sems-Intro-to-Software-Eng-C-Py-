#include <stdio.h>

int main() {
    double A = 1.23456789; // float doesn't give the proper output value so i used double.
    double B = 0.0000123456789;

    printf("1) %.10lf %.10lf\n", A, B);
    printf("2) %e %e\n", A, B);
    printf("3) %E %E\n", A, B);
    printf("4) %g %g\n", A, B);
    printf("5) %G %G\n", A, B);

    return 0;
}