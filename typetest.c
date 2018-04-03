//
// Created by lishoulin on 18/4/3
//use gcc or clang
//
#include <printf.h>
#include "typetest.h"

#define TRUE 1
#define FALSE 0


void printtest() {
    char c[100];
    int i = 0;
//    printf("enter a value: \n");
//    gets(c);
//
//    printf("you entered:");
//
//    puts(c);
//
//    printf("\n");



    printf("print new number");
    scanf("%s %d",c,&i);

    printf( "\nYou entered: %s %d ", c, i);
    printf("\n");

}