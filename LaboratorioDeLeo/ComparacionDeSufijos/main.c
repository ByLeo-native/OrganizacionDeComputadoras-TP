#include <stdio.h>
#include <stdlib.h>

int main()
{
    if( -1L < 1U ) {
        printf("-1L < 1U es verdadera.\n");
    } else {
        printf("-1L < 1U es falsa.\n");
    }

    if( -1L < 1UL ) {
        printf("-1L < 1UL es verdadera.\n");
    } else {
        printf("-1L < 1UL es falsa.\n");
    }
    return 0;
}
