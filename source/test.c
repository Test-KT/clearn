#include <stdlib.h>
#include <stdio.h>
#include <pthread/pthread.h>
#include "testramdom.h"



#define NUM 5

struct Params
{
    int aab;
    int aac;
};

int Random(int start, int end)
{
    int dis = end - start;
    return rand() % dis + start;
}

void *demo(void *threadid)
{
    struct Params *tid;
    tid = threadid;
    printf("Hello Runoob!\n");
    int sheeptime = Random(1, 10);
    sleep(sheeptime);
    printf("停止! 线程 ID, %d 线程时间%d \n", tid->aac, sheeptime);
    pthread_exit(NULL);
}

int main()
{
    printf("hello vscode \n");
    // pthread_t pid[NUM];
    // int index[NUM];
    // struct Params params;
    // params.aab = 1;
    // params.aac = 2;
    // pthread_create(&pid[1], NULL, demo, &params);
    // for(int i=0;i<NUM;i++){
    //     printf("main() : 创建线程, %d\n", i);
    //     int state=pthread_create(&pid[i],NULL,demo,&i);
    //     if(state!=0){
    //          printf("pthread_create error: error_code = %d\n", state);
    //          exit(-1);
    //     }
    // }
    testramdom();


    // pthread_exit(NULL);

    return 0;
}