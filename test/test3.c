//
// Created by lishoulin on 18/4/8.
//
#include <stdio.h>

void sort(int *arr);

void main() {
    int x, y, z;
    printf("\n请输入三个数字:\n");
    scanf("%d%d%d", &x, &y, &z);

    int arr = {1, 2, 3};

    sort(arr);


}


void sort(int *arr){
    int w;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < i; j++) {
            if (arr[j + 1] < arr[j]) {
                w = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = w;
            }
        }
    }

    printf("%s\n", arr);
}