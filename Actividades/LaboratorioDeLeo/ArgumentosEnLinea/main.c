#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int i;
    printf("%d argumentos\n", argc);
    for (i = 1; i < argc; i++) {
        printf("%d: %s\n", i, argv[i]);
    }
    return 0;
}
