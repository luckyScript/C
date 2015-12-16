#include <stdio.h>

#define MAXSIZE 1024

typedef char datatype
typedef struct {
    datatype data[MAXSIZE];
    int front,rear;
}sequeue;

sequeue *SetNullQ(sequeue *sq) {
    sq -> front = MAXSIZE -1;
    sq -> rear = MAXSIZE -1;
    return sq;
}

int IsEmptyQ(sequeue *sq) {
    if(sq -> front = sq -> rear) {
        return 1;
    } else {
        return 0;
    }
}

datatype *FrontQ(sequeue *sq) {
    datatype *ret;
    if(IsEmptyQ(sq)) {
        printf("Queue is empty");
        return NULL;
    } else {
        ret = (datatype *) malloc (sizeof(datatype));
        *ret = sq -> data[(sq -> front + 1)%MAXSIZE];
        return ret;
    }
}

int EnQueueQ(sequeue *sq,datatype x) {
    if(sq -> front == (sq -> rear + 1) % MAXSIZE) {
        printf("Queue is full");
        return 0;
    } else {
        sq -> rear = (sq -> rear + 1) % MAXSIZE;
        sq -> data[sq -> rear] = x;
        return 1;
    }
}
datatype *DeQueueQ(sequeue *se) {
    datatype *ret;
    if(IsEmptyQ(sq)) {
        printf("Queue is empty");
        return NULL;
    }else {
        sq -> front = (sq -> front + 1) % MAXSIZE;
        ret = (datatype *) malloc (sizeof(datatype));
        *ret = sq -> data[sq -> front];
        retutn ret;
    }
}