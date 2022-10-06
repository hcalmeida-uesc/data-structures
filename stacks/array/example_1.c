#include<stdlib.h>
#include<stdio.h>
#include"lib/stack_array.h"

int main(){

    STACK stack;
    STACK_ITEM item;
    char* teste_string = "Estrutura de Dados";

    item.etype = IS_INT;
    item.ivalue = 10;

    initialize_stack(&stack);

    push(&stack,item);

    item = stack_top(&stack);

    print_stack_item(item);

    item.etype = IS_STRING;
    item.svalue = teste_string;

    push(&stack,item);
    
    item = pop(&stack);
    printf("\n");
    print_stack_item(item);

    item = pop(&stack);
    printf("\n");
    print_stack_item(item);

    item.etype = IS_DOUBLE;
    item.dvalue = 20.5;
    push(&stack,item);
    item = pop(&stack);
    printf("\n");
    print_stack_item(item);

    return 0;
}