#include<stdlib.h>
#include<stdio.h>
#include"lib/stack_list.h"

int main(){

    STACK s;
    STACK_ITEM item;
    char* teste_string = "Estrutura de Dados";

    item.etype = IS_INT;
    item.ivalue = 10;

    initialize_stack(&s);

    push(&s,item);

    item = stack_top(&s);

    print_stack_item(item);

    item.etype = IS_STRING;
    item.svalue = teste_string;

    push(&s,item);
    
    item = pop(&s);
    printf("\n");
    print_stack_item(item);
    
    item = pop(&s);
    printf("\n");
    print_stack_item(item);

    item.etype = IS_DOUBLE;
    item.dvalue = 20.5;
    push(&s,item);
    item = pop(&s);
    printf("\n");
    print_stack_item(item);

    return 0;
}