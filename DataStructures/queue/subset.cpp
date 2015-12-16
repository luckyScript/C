#include <stdio.h>

void
DivideIntoGroup(int n,int R[n][n],int cp[n],int result[n]) {
    int front,rear;
    int group,pre;
    int i;
    front = n-1;
    rear = n-1;
    for(i = 0;i < n;i++) {
        cp[i] = i+1;
    }
    group = 1;
    pre = 0;

    do{
        front = (front + 1)%n;
        I = cp[front];
        if(I < pre) {
            group = group + 1;
            result[I - 1] = group;
            for(i = 0;i < n;i++) {
                newr[i] = R[I-1][i];
            }
        }else {
            if(newr[I -1]!=0) {
                rear = (rear + 1)%n;
                cp[rear] =1;
            }
        }
    }while(rear != front)
}