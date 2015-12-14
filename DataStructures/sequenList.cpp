#include <stdio.h>
#include <stdlib.h>

#define MAXSIZE 1024
//type define
typedef char datatype;
typedef struct {
    datatype data[MAXSIZE];
    int last;
}sequenlist;

sequenlist *L;

//create sequenList
sequenlist *Create() {
    int i = 0;
    L = (sequenlist *)malloc(sizeof(sequenlist));
    L -> last = -1;
    char ch = getchar();
    while(ch!='#') {
        L -> data[i++] = ch;
        L -> last += 1;
    }
    return L;
}

int Insert(sequenlist *L, int x, int i) {
    int j;
    if((L -> last) >= MAXSIZE -1) {
        printf("overflow error\n");
        return 0;
    }else {
        if((i<1) || (i > L->last+2)) {
            printf("error\n");
            return 0;
        }else {
            for(int j = L->last;j>=i;j--) {
                L -> data[i+1] = L -> data[i];
            }
            L -> data[i-1] = x;
            L -> last = L -> last+1;
        }
        return 1;
    }
}

void Output(sequenlist *L) {
    int i;
    printf("elements in sequenlist:\n");
    for(i = 0;i<L -> last;i++) {
        printf("%c",L -> data[i]);
    }
    printf("\n");
}
int main() {
    char ch;
    int i,ret;
    L = Create();
    printf("\n Please input insert char");
    scanf("%c",&ch);
    printf("\n Please input place");
    scanf("%d",&i);
    ret = Insert(L,ch,i);
    if(ret) {
        Output(L);
    }
    return 0;
}
