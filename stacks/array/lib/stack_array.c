#include<stdio.h>
#include<stdlib.h>
#include"stack_array.h"

void initialize_stack(STACK * s){
    s->top = -1;
}

int is_empty(STACK * s){
    return (s->top == -1);
}

void push(STACK * s, STACK_ITEM item){
    if(s->top < STACKSIZE-1){
        s->info[++s->top] = item;
        //printf("\n%d\n",item.ivalue);
    }
    else{
        printf("\n\nERROR! FULL STACK!!\n\n");
    }
}

STACK_ITEM pop(STACK * s){
    if(is_empty(s)){
        printf("\n\nERROR! EMPTY STACK!!\n\n");
        exit(-1);
    }
    else{
        return s->info[s->top--];
    }
}

STACK_ITEM stack_top(STACK * s){
    STACK_ITEM temp = pop(s);
    push(s,temp);
    return temp;
}
