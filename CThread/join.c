#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <math.h>

#define NUM 5

void *busywork(void *t) {
    int i;
    long tid;
    double rs = 0.0;
    tid = (long)t;
    printf("thread %ld starts", tid);
    for (i = 0; i < 10000; i++) {
        rs = i + tan(i) + sin(i);
    }
    printf("thread %ld ends", tid);
    pthread_exit((void *)tid);
}

int main(int argc, char **argv) {
    pthread_t threadArr[NUM];
    pthread_attr_t attr;
    int rc;
    long t;
    void *status;

    /* Initialize and set thread detached attribute */
    pthread_attr_init(&attr);
    pthread_attr_setdetachstate(&attr, PTHREAD_CREATE_JOINABLE);

    for (t = 0; t < NUM; t+=1) {
        rc = pthread_create(&threadArr[t], &attr, busywork, (void *)t);
        if (rc < 0) {
            printf("ERROR on creating thread");
            exit(-1);
        }
    }
    /* Free attribute*/
    pthread_attr_destroy(&attr);

    for(t = 0; t < NUM; t+=1) {
        rc = pthread_join(threadArr[t], &status);
        if (rc < 0) {
            printf("ERROR on join thread");
            exit(-1);
        }
    }
    pthread_exit(NULL);
}
