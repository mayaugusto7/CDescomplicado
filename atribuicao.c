#include <stdio.h>
#include <stdlib.h>

int main() {

    int z;
    int x = 5, y;
    y = x;
    y = x + 10;

    x = y = z = 10; // todas as variaveis com mesmo valor

    printf_s("%d ", x);
    printf_s("%d ", y);
    printf_s("%d ", z);

    x = 97;
    char ch1, ch2 = 'A';
    ch1 = x;

    printf_s("\nch1 = %c \n", ch1);
    x = ch2;
    printf_s("x = %d \n", x);

    x = 833;
    float f1, f2 = 5.25F;
    f1 = x;
    printf_s("f1 = %f \n", f1);
    x = f2;
    printf_s("x = %d \n", x);

    float f = 97.3F;
    ch1, ch2 = 'A';
    ch1 = f;
    printf_s("ch1 = %c \n", ch1);
    f = ch2;
    printf_s("f = %f \n", f);

    system("pause");
    return 0;
}