//
// Created by lishoulin on 18/4/8.
//
#include <stdio.h>

int main() {


    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d * %d = %d ", i, j, i * j);
        }
        printf("\n");
    }

    printf("double * \n");

    double x, y, z;
    x = 10.1;
    y = 1.21;

    z = x * y;

    printf("%.2lf \n", z);

    printf("%f \n", 14.556);

    printf("%#x \n",15);

    printf ("Some different radices: %d %x %o %#x %#o \n", 100, 100, 100, 100, 100);
}