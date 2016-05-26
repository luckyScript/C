#include <stdio.h>

int judge(char a[]);

int
main() {
	char a[] = "asfsa";
	judge(a);
	return 0;
}

int
judge(char a[]) {
	printf("%d", strlen(a));
	return 0;
}