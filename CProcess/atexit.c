#include <stdio.h>
void alert1() {
    printf("alert1");
}
void alert2() {
    printf("alert2");
}

int
main() {
    // register alert1 and alert2
    atexit(alert1);
    atexit(alert2);

    // exit and call alert2 first then alert1
    return 0;
}
