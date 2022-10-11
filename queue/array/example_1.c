#include<stdlib.h>

#include"lib/queue_array.h"

int main(){
    QUEUE q;
    QUEUE_ITEM item;

    initialize_queue(&q);

    item.etype = IS_INT;
    item.ivalue = 10;

    enqueue(&q,item);

    print_queue_item(q.items[q.front]);


    return 0;
}