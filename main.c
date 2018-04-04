#include <stdio.h>
#include <string.h>

#include "typetest.h"

#include "pre.h"

int parseArray(double *array, int length);


const int MAX = 3;

struct Books {
    char title[50];
    char author[50];
    char subject[50];
    int bookId;
};

struct bsd {
    int a:8;
    int b:2;
    int c:6;
};

union Data {
    int i;
    float f;
    char str[15];
} data;


void printBook(struct Books *book);

void main_test();

void main_test1();


void typetest();

int main() {
    printf("Hello, World!\n");
//    typetest();
    testpre();
    return 0;
}

void typetest() {//    data.f = 10.0;
//    data.i = 1;
//    strcpy(data.str, "hello");
//    printf("memory size %d \n", sizeof(data));
//    printf("data value %s \n", data.str);
//
//    printf("int size %f \n", sizeof(float));

    testFile();
}

void main_test1() {
    //    main_test();
//    struct bs {
//        unsigned a:1;
//        unsigned b:3;
//        unsigned c:4;
//    } bit, *pbit;
//    bit.a = 1;    /* 给位域赋值（应注意赋值不能超过该位域的允许范围） */
//    bit.b = 7;    /* 给位域赋值（应注意赋值不能超过该位域的允许范围） */
//    bit.c = 15;    /* 给位域赋值（应注意赋值不能超过该位域的允许范围） */
//    printf("%d,%d,%d\n", bit.a, bit.b, bit.c);    /* 以整型量格式输出三个域的内容 */
    struct pac {
        unsigned a:1;
        unsigned b:8;
    } bit;

    bit.a = 1;
    bit.b = 8;
    printf("%d,%d\n", bit.a, bit.b);

}

int parseArray(double *array, int length) {

    printf("array length is %d \n", length);
    printf("array 地址:%p \n", &array);

    for (int i = 0; i < length; i++) {
        array[i] = array[i] + 1;
    }

    return 0;
}


void main_test() {
    //    double balance[5] = {100, 20, 20, 20, 10};
//    int size = sizeof(balance) / sizeof(balance[0]);
//    printf("balance 地址:%p \n", &balance);
//    parseArray(balance, size);
//    printf("arrays value is %d \n", (int) balance[1]);
//
//    int bs = 20;
//    int *ip;
//    ip = (int *) bs;
//
//    printf("bs 地址:%p ip地址:%d \n", &bs, (int) ip);
//
//    int *pr = NULL;
//    if (pr) {
//        printf("不是空的 \n");
//    } else {
//        printf("是空的 \n");
//
//    }
//
//    int *it;
//    it = 1;
//    printf("it value is : %d \n",it);
//    printf("it value is address: %p \n",&it);
//    it++;
//    printf("it value is address: %p \n",&it);
//
//    printf("it value is : %d \n",it);

    int var[] = {10, 100, 200};
    int i, *ip;

    ip = var;

    for (int i = 0; i < MAX; i++) {
        printf("存储地址：var[%d] = %x\n", i, ip);
        printf("存储值：var[%d] = %d\n", i, *ip);
        ip++;
    }


    ip = &var[MAX - 1];
    for (int i = MAX; i > 0; i--) {
        printf("存储地址：var[%d] = %x\n", i - 1, ip);
        printf("存储值：var[%d] = %d\n", i - 1, *ip);
        ip--;
    }


    for (int i = 0; i < MAX; i++) {
        printf("存储地址：var[%d] = %d\n", i, var[i]);

    }

    char str1[12] = "hello";
    char str2[12] = "world";
    char str3[12];

    strcpy(str3, str1);

    strcat(str1, str2);


    printf("str3 :%s len:%lu \n", str3, strlen(str3));
    printf("str3 :%s len:%lu \n", str1, strlen(str1));


    struct Books Book1;

    strcpy(Book1.title, "English");
    strcpy(Book1.author, "lsl");
    strcpy(Book1.subject, "lean english");
    Book1.bookId = 1;


    printBook(&Book1);


    struct Books bs[] = {Book1, Book1, Book1};

    printf("v is %s \n", bs[1].author);


}

void printBook(struct Books *Book1) {
    printf("Book 1 title : %s\n", Book1->title);
    printf("Book 1 author : %s\n", Book1->author);
    printf("Book 1 subject : %s\n", Book1->subject);
    printf("Book 1 book_id : %d\n", Book1->bookId);
}