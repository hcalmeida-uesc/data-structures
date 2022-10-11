#ifndef QUEUE_ITEM_H
#define QUEUE_ITEM_H

#define IS_INT      1
#define IS_DOUBLE   2
#define IS_STRING   3

struct queue_item{
    int etype;
    union{
        int ivalue;
        double dvalue;
        char* svalue;
    };
};

typedef struct queue_item QUEUE_ITEM;

void print_queue_item(QUEUE_ITEM );

#endif