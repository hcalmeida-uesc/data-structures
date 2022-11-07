#include<stdlib.h>
#include<stdio.h>
#include"lib/list_de.h"

int main(){
    LIST lista;
    int teste;
    
    initialize(&lista);

    insertFirst(&lista,10);
    insertFirst(&lista,5);
    insertLast(&lista,15);

    if(isEmpty(&lista))
        printf("Lista vazia");

    printAll(&lista);
    
    teste = search(&lista,5)->info;

    removeNode(&lista,search(&lista,15));

    printAll(&lista);

    return 0;
}