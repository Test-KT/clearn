//
// Created by lishoulin on 18/4/4.
//

#include <printf.h>
#include "testtype.h"

void testtype() {
    int sum = 17, cout = 5;
    double mean;
    mean = (double) sum / cout;

    printf("value %f \n", mean);

    int i = 17;
    char c = 'c';
    int x = i + c;

    printf("Value of x : %c\n", (char)x );

}