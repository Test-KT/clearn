//
// Created by lishoulin on 18/4/4.
//
#include <stdio.h>
/**
 * 输入某年某月某日，判断这一天是这一年的第几天？
 * @return
 */
int main() {
    int day, moth, year, sum, lev;
    printf("\n请输入年、月、日，格式为：年,月,日（2015,12,10）\n");
    scanf("%d,%d,%d", &year, &moth, &day);  // 格式为：2015,12,10
    switch (moth) {
        case 1:
            sum = 0;
            break;
        case 2:
            sum = 31;
            break;
        case 3:
            sum = 59;
            break;
        case 4:
            sum = 90;
            break;
        case 5:
            sum = 120;
            break;
        case 6:
            sum = 151;
            break;
        case 7:
            sum = 181;
            break;
        case 8:
            sum = 212;
            break;
        case 9:
            sum = 243;
            break;
        case 10:
            sum = 273;
            break;
        case 11:
            sum = 304;
            break;
        case 12:
            sum = 334;
            break;
        default:
            printf("data error");
            break;
    }

    sum = sum + day;
    if (year % 400 == 0 || year % 4 == 0 && year % 100 == 0) {
        lev = 1;
    } else {
        lev = 0;
    }

    if (lev == 1 && moth > 2) {
        sum++;
    }
    printf("这是这一年的第 %d 天。", sum);
    printf("\n");

    return 0;
}
