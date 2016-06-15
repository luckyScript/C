// history version
// int
// main(int argc, char **argv, char **envp) {
//
// }
#include <stdio.h>
#include <stdlib.h>
int main () {
    char *home = getenv("HOME");
    printf("%s", home);
    return 0;
}
