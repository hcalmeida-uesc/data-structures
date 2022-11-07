#ifndef LIST_DE_H
#define LIST_DE_H

struct node{
    int info;
    struct node * next;
    struct node * previous;
};
typedef struct node NODE;

struct head{
    struct node * first;
    struct node * last;
    int size;
};
typedef struct head LIST;

NODE* getnode();

void freenode(NODE*);

int isEmpty(LIST*);

void initialize(LIST*);

void insertFirst(LIST*, int);

void insertLast(LIST*, int);

void insertAfter(NODE*,NODE*);

void insertBefore(NODE*,NODE*);

NODE* search(LIST*,int);

void removeNode(LIST*,NODE*);

void printAll(LIST*);

#endif