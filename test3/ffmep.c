//
// Created by lishoulin on 18/5/17.
//

#include "ffmep.h"
#include "lwlog.h"
#include <time.h>
#include <stdio.h>


void ffmep() {
    int *p = NULL;
    int i = 1;
    p = &i;

    if (!p) {
        printf("空的哟 \n");

    } else {
        printf("非空\n");

    }

    int *ptr;
    int d = 1000;

    ptr = &d;
    printf("%#X \n", ptr);

    ptr++;
    printf("%#X \n", ptr);

    int var[] = {10, 11, 12};

    int *pp;
    int *pp2;
    pp = &var[0];
    pp2 = pp;
    printf("%d\n", *pp);
    pp++;
    printf("%d\n", *pp);
    printf("%d \n", *pp2);
    if (pp == pp2) {
        printf("两个指针相等 \n");
    } else {
        printf("两个指针不相等 \n");
    }

    if (*pp == *pp2) {
        printf("两个指针值相等 \n");
    } else {
        printf("两个指针值不相等 \n");
    }

    int *vv;
    int **v;
    int xx = 100;
    vv = &xx;
    v = &vv;

    printf("%d \n", **v);

    struct tm t;

    t.tm_sec = 10;
    t.tm_min = 10;
    t.tm_hour = 6;
    t.tm_mday = 25;
    t.tm_mon = 2;
    t.tm_year = 89;
    t.tm_wday = 6;
    puts(asctime(&t));

    time_t time1;

    time(&time1);

    puts(ctime(&time1));

}