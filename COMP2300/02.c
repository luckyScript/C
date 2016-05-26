#include <stdio.h>

int
main(void) {
    int sum = 0;
    int i = 1;
    while (i != -1) {
        scanf("%d", &i);
        sum += i;
    }
    printf("%d", sum);
}
