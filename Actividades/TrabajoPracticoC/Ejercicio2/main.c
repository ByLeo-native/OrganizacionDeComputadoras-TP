#include <stdio.h>
#include <stdlib.h>

int tri(int x){
    int* res;
    res = (int*) malloc(sizeof(int));
    *res = 3 * x;
    return *res;
}
int main(){
    int a = 34;
    int a3;
    a3 = tri(a);
    printf("%d", a3);
    return 0;
}
