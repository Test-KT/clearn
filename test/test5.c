//
// Created by lishoulin on 18/4/8.
//
#include <stdio.h>
#include <math.h>

long long parstToByte(int n);

void main() {

    printf("十进制数转换为二进制位 %lld \n", parstToByte(255));
}

/**
 * 用2整除十进制整数，可以得到一个商和余数；
 * 再用2去除商，又会得到一个商和余数，如此进行，
 * 直到商为0时为止，然后把先得到的余数作为二进制数的低位有效位，
 * 后得到的余数作为二进制数的高位有效位，依次排列起来。
 * @param n
 * @return
 */
long long parstToByte(int n) {

    long long b = 0;
    int rem, i = 1, step = 0;
    while (n != 0) {
        rem = n % 2;  //余数
        printf("Step %d: %d/2, 余数 = %d, 商 = %d\n", step++, n, rem, n / 2);
        n = n / 2; //商
        b += rem * i;
        i *= 10;
        printf("current b: %d  ,%d\n",b,i);
    }

    return b;
}