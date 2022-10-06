#ifndef STACK_ARRAY_H
#define STACK_ARRAY_H

#define STACKSIZE   100

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

struct stack_array{
    int top;
    struct stack_item info[STACKSIZE];
};

typedef struct stack_array STACK;

void initialize_stack(STACK*);

int is_empty(STACK *);

void push(STACK*,STACK_ITEM);

STACK_ITEM pop(STACK *);

STACK_ITEM stack_top(STACK *);

void print_stack_item(STACK_ITEM );

#endif