#ifndef STACK_ITEM_H
#define STACK_ITEM_H

#define IS_INT      1
#define IS_DOUBLE   2
#define IS_STRING   3

struct stack_item{
    int etype;
    union{
        int ivalue;
        double dvalue;
        char* svalue;
    };
};

typedef struct stack_item STACK_ITEM;

void print_stack_item(STACK_ITEM );

#endif