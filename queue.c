//
// Created by lishoulin on 18/5/11.
//

#include "queue.h"


int EnQueue(struct Queue *queue, int x) {
    queue->array[queue->tail] = x;
    if (queue->tail + 1 == 10) {
        queue->tail = 0;
    } else {
        queue->tail = queue->tail + 1;
    }
    queue->length = queue->length + 1;
}

int DeQueue(struct Queue *queue) {
    int x = queue->array[queue->head];
    if (queue->head + 1 == 10) {
        queue->head = 0;
    } else {
        queue->head = queue->head + 1;
    }
    queue->length = queue->length - 1;
    return x;
}


int main() {
    struct Queue *queue = malloc(sizeof(struct Queue));
    queue->length = 0;
    queue->head = 0;
    queue->tail = 0;
    EnQueue(queue, 5);
    EnQueue(queue, 4);
    EnQueue(queue, 3);
    EnQueue(queue, 2);
    printf("%d \n", DeQueue(queue));
    printf("%d \n", DeQueue(queue));
    printf("%d \n", DeQueue(queue));
    printf("%d \n", DeQueue(queue));
    printf("%d \n", DeQueue(queue));


    return 0;
}