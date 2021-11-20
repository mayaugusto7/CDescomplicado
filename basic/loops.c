#include <stdlib.h>
#include <stdio.h>

int main() {
    int a, b;
    printf_s("Digite dois valores inteiros: ");
    scanf_s("%d %d", &a, &b);

    while (a < b) {
        a++;
        printf_s("%d\n", a);
    }

    while (a < b && a > 0) {
        a++;
        printf_s("%d\n", a);
    }

    printf_s("Fim do programa\n");
    system("pause");
    return 0;
}
