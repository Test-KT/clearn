//
// Created by lishoulin on 18/4/4.
//

#include "pre.h"
#include <stdio.h>

#ifndef FILE_SIZE
    #define FILE_SIZE 42
#endif

#define square(x)((x)*(x))

void testpre() {
    printf("defin value :%d \n",FILE_SIZE);
    printf("date %s \n",__DATE__);
    printf("time %s \n",__TIME__);
    printf("file %s \n",__FILE__);
    printf("std %d \n",__STDC_WANT_LIB_EXT1__);

    printf("square 5+4 is %d\n", square(5+4));

}