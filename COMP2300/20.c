#include <stdio.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

#define BUF 1024

int
main (void) {
	int rs = open("02.c",O_RDWR);
	if (rs != -1) {
		char data[BUF];
		int size = read(rs, data, BUF);
		if (size) {
			for (int i = 0; i < size; i++) {
				printf("%c", data[i]);
			}
		}
		close(rs);
	}

	return 0;
}
