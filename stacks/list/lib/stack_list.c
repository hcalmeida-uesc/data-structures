#include<stdio.h>
#include<stdlib.h>
#include"stack_list.h"

void initialize_stack(STACK * s){
    s->below = 0;
}

int is_empty(STACK * s){
    return (s->below == 0);
}

void push(STACK * s, STACK_ITEM item){
    STACK * new_item;
    
    new_item = malloc(sizeof(STACK));

    initialize_stack(new_item);

    new_item->info = s->info;
    new_item->below = s->below;
    s->below = new_item;
    s->info = item;
}

STACK_ITEM pop(STACK * s){
    if(is_empty(s)){
        printf("\n\nERROR! EMPTY STACK!!\n\n");
        exit(-1);
    }
    else{
        STACK_ITEM temp_item = s->info;
        STACK * temp_s = s->below;
        
        s->info = temp_s->info;
        s->below = temp_s->below;

        free(temp_s);

        return temp_item;
    }
}

STACK_ITEM stack_top(STACK * s){
    STACK_ITEM temp = pop(s);
    push(s,temp);
    return temp;
}
