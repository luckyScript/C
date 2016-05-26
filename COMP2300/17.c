#include <stdio.h>
#include <stdlib.h>
int
main() {
	int *a = malloc(sizeof(int) * 100);
	while(1) {
		a[1] = 60;
		printf("%d",a[1]);
	}
	return 0;
}