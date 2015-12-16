/*sequence stack*/
#include <stdio.h>

#define MAXSIZE 1024
typedef int datatype;
struct Stack {
    datatype elements[MAXSIZE];
    int Top;
};

struct Stack *SetNullStack(struct Stack *s) {
    s -> Top = -1;
    return s;
}
int IsEmptyStack(struct Stack *s) {
    if(s->Top >= 0) {
        return 0;
    }else {
        return 1;
    }
}
struct Stack *PushInStack (struct Stack *s,datatype e) {
    if(s->Top >= MAXSIZE -1) {
        printf("stack overflow");
        return NULL;
    }else {
        s -> Top += 1;
        s -> elements[s -> Top] = e;
    }
    return S;
}

datatype *PopOutStack(struct Stack *s) {
    if(IsEmptyStack(s)) {
        printf("stack underflow");
        return NULL;
    }else {
        s -> Top -=1;
        *ret = (datatype *) malloc (sizeof(datatype));
        ret = s -> elements[s -> Top+1];
        return ret;
    }
}
datatype *GetTop(struct Stack *s) {
    datatype *ret;
    if(IsEmptyStack(s)) {
        printf("Empty stack");
        return NULL;
    }else {
        *ret = (datatype *) malloc (sizeof(datatype));
        ret = s -> Elements[s->Top];
        return ret;
    }
}
