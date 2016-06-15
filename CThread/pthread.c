#include <stdio.h>
#include <pthread.h>

#define NUM 5

void *
printHello(void *id)
{
    long tid;
    tid = (long)id;
    printf("this thread id is %ld, helloworld\n", tid);
    pthread_exit(NULL);
}

int
main()
{
    pthread_t thread[NUM];
    int t;
    for (t = 0; t < NUM; t+=1)
    {
        pthread_create(&thread[t], NULL, printHello, (void *)t);
    }
    pthread_exit(NULL);
}
