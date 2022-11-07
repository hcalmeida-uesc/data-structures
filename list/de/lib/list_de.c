#include<stdlib.h>
#include<stdio.h>
#include"list_de.h"

NODE* getnode(){
    NODE* aux;

    aux = malloc(sizeof(NODE));
    aux->previous = aux->next = aux;


    return aux;
}

void freenode(NODE* node){
    free(node);
}

void initialize(LIST* list){
    list->first = list->last = NULL;
    list->size = 0;
}

int isEmpty(LIST* list){
    return(!list->size);
}

void insertFirst(LIST* list, int x){
    NODE* aux = getnode();
    aux->info = x;

    if(isEmpty(list)){
        list->first = list->last = aux;
    }
    else{
        insertBefore(list->first, aux);
    
        list->first = aux;
    }

    list->size++;
}

void insertLast(LIST* list, int x){
    NODE* aux = getnode();
    aux->info = x;

    if(isEmpty(list)){
        list->first = list->last = aux;
    }
    else{
        insertAfter(list->last,aux);
   
        list->last = aux;
    }

    list->size++;
}

void insertAfter(NODE* node_list, NODE* new_node){

    new_node->next = node_list->next;
    new_node->previous = node_list;
    new_node->next->previous = new_node;
    new_node->previous->next = new_node;

}

void insertBefore(NODE* node_list, NODE* new_node){

    new_node->next = node_list;
    new_node->previous = node_list->previous;
    new_node->next->previous = new_node;
    new_node->previous->next = new_node;

}

NODE* searchRecursive(LIST* list, NODE* node, int value){
    if(node->info == value || node->next == list->first)
        return node;
    
    searchRecursive(list,node->next,value);
}

NODE* search(LIST* list, int value){
    NODE* temp = searchRecursive(list,list->first,value);

    if(temp->info != value)
        printf("\n\nNAO ENCONTRADO\n\n");

    return temp;
}

void removeNode(LIST* list, NODE* node){

    node->next->previous = node->previous;
    node->previous->next = node->next;

    if(list->first == node)
        list->first = node->next;
    if(list->last == node)
        list->last = node->previous;

    list->size--;

    free(node);
}

void printAllRecursive(LIST* list, NODE* node){
    printf("%d\n",node->info);
    if(node != list->last)
        printAllRecursive(list,node->next);
}

void printAll(LIST* list){
    printf("First Element\n");
    printAllRecursive(list,list->first);
    printf("Last Element\n");
}
