#include <stdio.h>
#define MAXSIZE 1024
typedef char datatype;
typedef struct node {
    datatype data;
    struct node *leftChild,*rightChild;
}bitree

bitree *
CreateTree() {
    char ch;    
    bitree *Q[MAXSIZE];
    int front,rear; 
    bitree *root,*s; 
    root = NULL;
    front = 1;rear = 0;

    while((ch = getchar()) != '#') {
        s = NULL;
        if(ch != '@') {
            s = (bitree *)malloc(sizeof(bitree));
            s->data = ch;
            s->leftChild = NULL;
            s->rightChild = NULL;
        }
        rear ++;
        Q[rear] = s;
        if(rear == 1) {
            root = s;
        }else {
            if(s && Q[front]) {
                if(rear%2 == 0) {
                    Q[front]->leftChild = s;
                }else {
                    Q[front]->rightChild = s;
                }
                if(rear %2 == 1) {
                    front++;
                }
            }
        }
    }
    return root;
}

//traversing binary tree (广度优先算法)
void 
Layer(bitree *p) {
    bitree *Q[MAXSIZE];
    bitree *s;
    int rear = 1;
    int front = 0;
    Q[rear] = p;
    while(front < rear) {
        front+=1;
        s = Q[front];
        printf("%c",s->data);
        if(s -> leftChild != NULL) {
            rear+=1;
            Q[rear] = s-> leftChild;
        }
        if(s -> rightChild != NULL) {
            rear +=1;
            Q[rear] = s -> rightChild;
        }
    }
}
//leaves of binary tree
int
CountLeaves(bitree *s) {
    // root is NULL
    if(s == NULL) { 
        return 0;
    } else if(s -> leftChild == NULL || s -> rightChild == NULL){
        return 1;
    } else {
        return CountLeaves(s->leftChild)+CountLeaves(s->rightChild);
    }
}

int
CountDepth(bitree *s) {
    int ld,rd;
    if(s == NULL) {
        return 0;
    }
    ld = CountDepth(s->leftChild)+1;
    rd = CountDepth(s->rightChild)+1;
    return ld>rd?ld:rd;
}