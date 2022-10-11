#ifndef QUEUE_ARRAY_H
#define QUEUE_ARRAY_H

#include"queue_item.h"

#define QUEUE_SIZE 10

struct queue_array{
    QUEUE_ITEM items[QUEUE_SIZE];
    int front, rear;
};

typedef struct queue_array QUEUE;

void initialize_queue(QUEUE *);

void enqueue(QUEUE *, QUEUE_ITEM);

#endif