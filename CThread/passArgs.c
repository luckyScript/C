#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>
#define NUM 5

struct threadData
{
    int id;
    char *message;
};

void *
greeting(void *passData)
{
    struct threadData *data;
    data = (struct threadData *)passData;
    printf("your id: %d, your msg: %s\n", data->id, data->message);
    pthread_exit(NULL);
}
int
main()
{
    char *msg[NUM];
    msg[0] = "first";
    msg[1] = "second";
    msg[2] = "third";
    msg[3] = "forth";
    msg[4] = "fifth";
    struct threadData myData[NUM];
    pthread_t thread[NUM];
    int t, rs;
    for (t = 0; t < NUM; t+=1) {
        printf("t:%d\n", t);
        myData[t].id = t;
        myData[t].message = msg[t];
        rs = pthread_create(&thread[t], NULL, greeting, (void *)&myData[t]);
        if (rs < 0) {
            printf("ERROR on creating thread");
            exit(-1);
        }
    }
    pthread_exit(NULL);
}
