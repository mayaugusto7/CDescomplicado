#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("Hello, World!\n");

    int i = 1;
    int j = 2;
    int k = 1;

    printf_s("\n%d", i == j);
    printf_s("\n%d", i == k);

    system("pause");
    return 0;
}
