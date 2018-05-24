#include "testramdom.h"
#include <time.h>
int xx_random(int start,int end){
    sleep(1);
    srand((unsigned int)time(NULL));//设置当前时间为种子
    return rand()%10+1;
}

void testramdom(){
    int x1=xx_random(1,10);

    int x2=xx_random(1,10);

    int x3=xx_random(1,10);

    int x4=xx_random(1,10);

    int x5=xx_random(1,10);

    printf("%d,%d,%d,%d,%d \n",x1,x2,x3,x4,x5);
}


