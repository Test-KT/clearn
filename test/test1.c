//
// Created by lishoulin on 18/4/4.
//

#include <stdio.h>


int main() {
    //暴力版本
    int i, j, k;
    for (int i = 1; i < 5; i++) {

        for (int j = 1; j < 5; j++) {

            for (int k = 1; k < 5; k++) {
                if (i != k && i != j && j != k) {
                    printf("%d,%d,%d \n", i, j, k);
                }
            }
        }
    }


    //优化版本
    printf("优化版本 \n ");

    for (int i = 1; i < 5; i++) {

        for (int j = 1; j < 5; j++) {
            if (j == i) {
                continue;
            }

            for (int k = 1; k < 5; ++k) {
                if (k == j || k == i) {
                    continue;
                }
                printf("%d,%d,%d \n", i, j, k);
            }
        }
    }

    for (int i = 1; i < 5; i++) {

        for (int j = 1; j < 5; j++) {

            for (int k = 1; k < 5; k++) {
                if (i != k && i != j && j != k) {
                    printf("%d,%d,%d \n", i, j, k);
                }
            }
        }
    }

    return 0;
}