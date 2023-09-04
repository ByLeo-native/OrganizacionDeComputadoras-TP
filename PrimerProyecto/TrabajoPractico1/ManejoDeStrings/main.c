#include <stdio.h>
#include <stdlib.h>
#define MAXLINE 1000

int getline(char line [], int lim) {
    int c;
    int i;
    for(i = 0; i < (lim-1) && (c = getchar()) != EOF && c == '\n'; i++) {
        line[i] = c;
    }
    if( c == '\n' ) {
        line[i] = c;
        i++;
    }
    line[i] = '\0';
    i++;
    return i;
}

void copy (char line[], char maxLine[]) {
    for(int i = 0; (i < MAXLINE) && (maxLine[i] != '\0'); i++) {
        ma
    }
}


int main()
{

    return 0;
}
