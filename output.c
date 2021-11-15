#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("Meu programa C\n");

    char letra = 'a';
    int nro = 10;
    float n = 5.25F;

    printf("%c \n", letra);
    printf("%d \n", letra);
    printf("%d \n", nro);
    printf("%f \n", n);

    printf("Letra %c, inteiro %d \n", letra, nro);

    printf("Nro: %d, nro+1 %d \n", nro, nro + 1);

    system("pause");
    return 0;
}