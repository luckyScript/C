#include <stdio.h>
#include <stdlib.h>
typedef char datatype;
typedef struct node {
    datatype data;
    struct node *next;
}linkedlist;
//头插法
/*linkedlist *CreateList() {
    char ch;
    linkedlist *head,*s;
    head = NULL;
    while((ch = getchar())!='#') {
        s = (linkedlist *) malloc (sizeof(linkedlist));
        s -> data = ch;
        s -> next = head;
        head = s;
    }
    return head;
}
*/
//尾插法1
/*linkedlist *CreateList() {
    linkedlist *head *s *r;
    head = NULL;
    r = NULL;
    while((ch = getchar())!='#') {
        s = (linkedlist *)malloc (sizeof(linkedlist));
        s -> data = ch;
        if(head == NULL) {
            head = s;
        }else {
            r -> next = s;
        }
        r = s;
    }
    if(r != NULL) {
        r -> next = NULL;
    }
    return head;
}*/
//尾插法2
linkedlist *CreateList() {
    linkedlist *head *s *r;
    head = (linkedlist *)malloc(sizeof(linkedlist));
    r = head;
    while((ch = getchar()) != '#') {
        s = (linkedlist *)malloc (sizeof(linkedlist));
        s -> data = ch;
        r -> next = s;
        r = s;
    }
    r -> next = NULL;
    return head;
}

linkedlist *Get(linkedlist *head,int i) {
    int j;
    linkedlist *p;
    p = head;
    j = 0;
    while((p -> next != NULL) && (j<i)) {
        p = p -> next;
        j++;
    }
    if(i == j) {
        return p;
    }
    else {
        return NULL;
    }

    linkedlist *Locate(linkedlist *head,datatype key) {
        linkedlist *p;
        p = head;
        while((p != NULL) && (p -> data != key)) {
            p = p -> next;
        }
        if(p==NULL) {
            return NULL;
        }else {
            return p;
        }
    }

    void InsertAfter(linkedlist *p,datatype x) {
        linkedlist *s;
        s = (linkedlist *) malloc(sizeof(linkedlist));
        s -> data = x;
        s -> next = p -> next;
        p -> next = s;
    }

    void InsertBefore(linkedlist *head,linkedlist *p,datatype x) {
        linkedlist *s,*q;
        s -> data = x;
        q = head;
        while(q -> next != p) {
            q = q -> next;
        }
        s -> next = p;
        q -> next = s;
    }

    void Delete(linkedlist *p,linklist *head) {
        linklist *q;
        q = head;
        while(q -> next != p) {
            q = q -> next;
        }
        q -> next = p -> next;
        free(p);
    }
    
}