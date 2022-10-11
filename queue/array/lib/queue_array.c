#include<stdio.h>
#include<stdlib.h>

#include"queue_array.h"

void initialize_queue(QUEUE * q){
    q->front = q->rear = -1;
}

void enqueue(QUEUE * q, QUEUE_ITEM i){
    if(q->rear < QUEUE_SIZE-1 && q->front != q->rear + 1)
        q->items[++(q->rear)] = i;
    else
    if(q->front != 0){
        q->rear = 0;
        q->items[q->rear] = i;
    }
    else{
        printf("\n\nERROR!QUEUE IS FULL!\n\n");
        exit(-1);
    }
}