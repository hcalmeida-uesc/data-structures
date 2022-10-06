#ifndef STACK_ARRAY_H
#define STACK_ARRAY_H

#include "stack_item.h"

struct stack_list{
    struct stack_list * below;
    struct stack_item info;
};

typedef struct stack_list STACK;

void initialize_stack(STACK*);
 
int is_empty(STACK *);

void push(STACK*,STACK_ITEM);

STACK_ITEM pop(STACK *);

STACK_ITEM stack_top(STACK *);

#endif