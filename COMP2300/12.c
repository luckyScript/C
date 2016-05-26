#include <stdio.h>
#include <math.h>

int cacl(int a, int b, int c);

int
main(void) {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	printf("%d", cacl(a, b, c));
	return 0;
}

int cacl(int a, int b, int c) {
	int s = (a + b + c) / 2;
	return sqrt(s * (s - a) * (s - b) * (s - c));
}