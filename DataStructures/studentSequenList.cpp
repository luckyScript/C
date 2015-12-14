#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int
main(void) {
    return 0;
}

typedef struct {
    int number;
    char name[20];
    char sex;
    char addr[20];
}node;

typedef struct {
    node stu[MAX];
    int last;
}sequenlist;

sequenlist *L;

sequenlist *Create() {
    int i = 0;
    node student;
    L = (sequenlist *)malloc(sizeof(sequenlist));
    L -> last = -1;
    printf("please input student's detail information:\n");
    while(1) {
        printf("please input student's ID first:");
        scanf("%d",&student.number);
        if(student.number == 0) {
            break;
        }
        printf("\nplease input student's other information:(name sex address)");
        scanf("%s%c%s",student.name,&student.sex,student.addr);
        L -> stu[i++] = student;
        L -> last++;

    }
    return L;
}

void Input(sequenList *L, node student) {
    int i, j = 0;
    for(i = 0;i <= L.last; i++) {
        if(strcmp(student.name,L -> stu[i].name) < 0) {
            break;
        }
    }
    for(j = L.last;j >= i;j--) {
        L -> stu[j+1] = L -> stu[j];
    }
    L.stu[j] = student;
    L.last++;
}

int Delete(sequenlist *L, int n) {
    int i j;
    for(i = 0;i<=L.last;i++) {
        if(L -> stu[i].number == n) {
            break;
        }
    }
    if(i>L->last) {
        printf("NOT FOUND");
        return 0;
    }else {
        L -> last -=1;
        for(j = i;j<=L -> last;j++) {
            L.stu[j] = L.stu[j+1];
        }
        return 0;
    }


}