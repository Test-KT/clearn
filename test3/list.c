//
// Created by lishoulin on 18/5/16.
//
#include <stdio.h>
#include <stdlib.h> //exit 函数
#include <stdbool.h> //布尔值函数
#include "ffmep.h"

struct Arr {
    int *pBase;
    int len;
    int cnt;
};

void show_arr(struct Arr *pArr);//显示,分号不能省

void init_arr(struct Arr *pArr, int length);//初始化数组

bool is_empty(struct Arr *pArr);//判断是否为空数组

bool append_arr(struct Arr *pArr, int val);//追加，可能成功，可能失败

bool is_full(struct Arr *pArr);//是否满了

bool delete_arr(struct Arr *pArr, int pos, int *pVal);//删除某个元素

bool insert_arr(struct Arr *pArr, int pos, int val);     // 插入一条数据 pos的值从1开始

void sort_arr(struct Arr *pArr);//排序

void innversion_arr(struct Arr *pArr);//倒置


int main() {

    struct Arr arr;

    init_arr(&arr,3);
    append_arr(&arr,1);
    append_arr(&arr,2);
    append_arr(&arr,3);

    show_arr(&arr);

    ffmep();


    return 0;
}


void show_arr(struct Arr *pArr) {
    if (is_empty(pArr)) {
        printf("数组为空 \n");
    } else {
        for (int i = 0; i < pArr->cnt; ++i) {
            printf("%d\n", pArr->pBase[i]);
        }
        printf("\n");
    }
}

void init_arr(struct Arr *pArr, int length) {
    pArr->pBase = malloc(sizeof(int) * length);
    if (NULL == pArr->pBase) {
        printf("free error 动态内存分配失败！\n");

        exit(-1);//终止整个程序
    } else {
        pArr->len = length;
        pArr->cnt = 0;
        printf("free  动态内存分配成功！\n");
    }
}

bool is_empty(struct Arr *pArr) {
    if (pArr == 0) {
        return true;
    } else {
        return false;
    }
}

bool append_arr(struct Arr *pArr, int val) {
    if (is_full(pArr))
        return false;

    pArr->pBase[pArr->cnt] = val;
    (pArr->cnt)++;
    return true;
}

bool is_full(struct Arr *pArr) {
    if (pArr->cnt == pArr->len) {
        printf("%s\n", "当前分配的数组长度已满");
        return true;
    } else {
        return false;
    }
}

bool delete_arr(struct Arr *pArr, int pos, int *pVal) {
    int i;
    if (is_empty(pArr))
        return false;
    if (pos < 1 || pos > pArr->cnt)
        return false;

    *pVal = pArr->pBase[pos - 1];

    for (int j = pos; j < pArr->cnt; ++j) {
        pArr->pBase[i - 1] = pArr->pBase[i];
    }

    (pArr->cnt)--;
    return true;
}

