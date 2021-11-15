#include <stdio.h>
#include <stdlib.h>

int main() {

     char letra;
     int nro;
     float n;
     float f;
     double d;

    scanf_s("%c", &letra);
    scanf_s("%d", &nro);
    scanf_s("%f", &n);
    scanf_s("%f", &d);

    printf_s("%c\n", letra);
    printf_s("%d\n", nro);
    printf_s("%f\n", n);
    printf_s("%f\n", d);

    printf_s("\n");

    printf_s("Digite um numero: ");
    scanf_s("%d", &nro);

    printf_s("Numero digitado: %d \n", nro);

    printf_s("Digite dois numeros: ");
    scanf_s("%d%f", &nro, &f);

    printf_s("Numeros: %d e %f \n", nro, f);

    system("pause");

    return 0;
}