#include <stdio.h>
#include <math.h>

float distance(float a, float b, float c, float d);
float square (float a);
int
main(int argc, char **argv) {
	float a, b, c, d, e, f, g, h;
	scanf("%f %f\n%f %f\n%f %f\n%f %f", &a, &b, &c, &d, &e, &f, &g, &h);
	printf("%.1f",distance(a, b, c, d) + distance(c, d, e, f) + distance(e, f, g, h));
	return 0;
}

float distance(float a, float b, float c, float d) {
	return sqrt(square(a - c) + square(b - d));
}

float square(float a) {
	return a * a;
}