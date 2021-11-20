//
// Created by maycon on 20/11/2021.
//

#include <stdio.h>
#include <stdlib.h>

int main() {
    char ch;

    printf_s("Digite um simbolo de pontuacao: ");
    scanf_s("%c", &ch);

    switch (ch) {
        case '.':
            printf_s("Ponto.\n");
            break;
        case ',':
            printf_s("Virgula.\n");
            break;
        case ':':
            printf_s("Dois pontos.\n");
            break;
        case ';':
            printf_s("Ponto e virgula.\n");
            break;
        default:
            printf_s("Nao eh pontuacao.\n");
    }

    system("pause");
    return 0;
}