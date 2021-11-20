#include <stdio.h>
#include <stdlib.h>
#define PI 3.1415

int main() {
    const int nro = 10; // atribuir valor obrigatorio
    int soma = nro + 1;

    printf_s("Constante %d \n", nro);
    printf_s("Soma %d \n", soma);

    float f = PI + 1;
    printf_s("PI = %f \n", PI);

    system("pause");

    return 0;
}