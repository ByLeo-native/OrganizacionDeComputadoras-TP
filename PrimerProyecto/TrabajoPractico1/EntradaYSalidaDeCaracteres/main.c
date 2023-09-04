#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c = getchar();
    while(c != EOF) {
        putchar(c);
        c = getchar();
    }

    c = getchar() != EOF;
    printf("%c", c);
    return 0;
}
