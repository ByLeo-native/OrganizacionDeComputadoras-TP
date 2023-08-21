#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long binario;
    int decimal = 0, i = 0, resto ;

    printf("Ingresa un numero en notacion binaria:\n");
    scanf("%lld", &binario);

    while(binario != 0) {
        resto = binario % 10;
        decimal += resto* pow(2,i);
        i++;
        binario /= 10;
    }

    printf("Resultado en notacion binaria: %i", decimal);

    return 0;
}
