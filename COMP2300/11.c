#include <stdio.h>
void 
add(int a, int b, int *res) {
	*res = a + b;
}

int
main(void) {
	int res;
	add(4, 5, &res);
	printf("%d", res);
	return 0;
}