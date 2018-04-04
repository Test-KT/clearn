//
// Created by lishoulin on 18/4/3
//use gcc or clang
//
#include <printf.h>
#include "typetest.h"

#define TRUE 1
#define FALSE 0

void read(const char *str);

void write(const char *str, const char *msg);

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
    scanf("%s %d", c, &i);

    printf("\nYou entered: %s %d ", c, i);
    printf("\n");

}


void testFile() {
    FILE *file;
    char buff[255];
    file = fopen("/Users/lishoulin/Desktop/OpenCV/untitled/test.txt", "r");
//    fputs("this is testing for fput \n",file);
    fgets(buff, 255, file);
    printf("file value: %s \n", buff);
    fclose(file);
}


void read(const char *str) {
    FILE *f;
    char *buff = NULL;
    f = fopen(str, "r");
    fgets(buff, 255, f);
    fclose(f);
}

void write(const char *str, const char *msg) {

}
