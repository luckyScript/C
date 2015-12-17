linked CreateExp (char *postexp) {
    linked stack[MAXSIZE],t;
    int sp = -1;
    while(*postexp != '\0') {
        t = (bitree *)malloc(sizeof(bitree));
        t -> data = *postexp;
        t -> leftChild = NULL;
        t -> rightChild = NULL;
        if(*postexp == '*' || *postexp == '+') {
            if(sp < 0) {
                return NULL;
            }
            t->leftChild = stack[sp-1];
            t->rightChild = stack[sp--];
            stack[sp] = t;
        } else {
            stack[++sp] = t;
        }
        postexp++;
    }
    if(sp == 0) {
        return stack[0];
    }else {
        return NULL;
    }
}