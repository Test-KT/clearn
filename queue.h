//
// Created by lishoulin on 18/5/11.
//

#ifndef UNTITLED_QUEUE_H
#define UNTITLED_QUEUE_H

#endif //UNTITLED_QUEUE_H

#include <stdio.h>
#include <stdlib.h>

struct Queue {
    int array[10];
    int head;
    int tail;
    int length;
};


int InitQueue();

int DestroyQueue();

int ClearQueue();

int QueueEmpty();

int GetHead();

int EnQueue(struct Queue *queue,int x);

int DeQueue(struct Queue *queue);

int QueueLength();