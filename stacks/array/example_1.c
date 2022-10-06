#include<stdlib.h>
#include<stdio.h>
#include"lib/stack_array.h"

int main(){

    STACK s;
    STACK_ITEM item;
    char* teste_string = "Estrutura de Dados";

    item.etype = IS_INT;
    item.ivalue = 10;

    initialize_stack(&s);

    printf("\n%d\n",s.top);

    push(&s,item);

    item = stack_top(&s);

    printf("\n%d\n",s.top);
    print_stack_item(item);

    item.etype = IS_STRING;
    item.svalue = teste_string;

    push(&s,item);
    
    item = pop(&s);

    print_stack_item(item);

    print_stack_item(pop(&s));


    return 0;
}