#ifndef STACK_ARRAY_H
#define STACK_ARRAY_H

#include "stack_item.h"

#define STACKSIZE   100

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

#endif