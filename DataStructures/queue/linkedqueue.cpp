#include <stdio.h>

typedef char datatype;
typedef struct node {
    datatype data;
    struct node *p;
}linkedlist;
typedef struct {
    linkedlist *front,*rear;
}linkedqueue;

