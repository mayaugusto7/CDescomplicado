//
// Created by maycon on 20/11/2021.
//
# include <stdio.h>
# include <stdlib.h>

int main() {
    int x;
    printf_s("Digite um valor inteiro: ");
    scanf_s("%d", &x);

    if (x > 0) {
        printf_s("O valor eh positivo\n");
    }

    if ((x % 2 == 0) || (x < 0)) {
        printf_s("O valor eh par ou negativo\n");
    }

    if (x % 2 == 0) {
        printf_s("O valor eh PAR.\n");
    } else {
        printf_s("O valor eh IMPAR.\n");
    }

    int num;
    printf_s("Digite um numero: ");
    scanf_s("%d", &num);

    if (num == 0) {
        printf_s("O numero e igual a 0.\n");
    } else {
        if (num > 0) {
            printf_s("O numero e maior do que 0.\n");
        } else {
            printf_s("O numero e menor do que 0.\n");
        }
    }


    int a, b, c;
    printf_s("Digite a: ");
    scanf_s("%d", &a);

    printf_s("Digite b: ");
    scanf_s("%d", &b);

    c = a > b ? a : b;

    (a > b) ? printf_s("A eh o maior. \n") : printf_s("B eh o maior.");

    printf_s("Maior = %d\n", c);

    printf_s("Fim do programa \n");
    system("pause");
    return 0;
}
