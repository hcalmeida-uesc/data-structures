#include<stdio.h>
#include "queue_item.h"

void print_queue_item(QUEUE_ITEM item){
    switch(item.etype){
        case(IS_INT):
            printf("%d",item.ivalue);
            break;
        case(IS_DOUBLE):
            printf("%f",item.dvalue);
            break;
        case(IS_STRING):
            printf("%s",item.svalue);
            break;
    }
}