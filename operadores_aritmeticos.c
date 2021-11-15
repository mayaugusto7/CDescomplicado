#include <stdio.h>
#include <stdlib.h>

int main() {

    int x1, x2 = 10, x3 = 12;
    char ch1, ch2 = '0', ch3 = 'A';
    float f1, f2 = 5.25F, f3 = 10.5F;

    x1 = x2 + x3;
    ch1 = ch2 + ch3;
    f1 = f2 + f3;

    printf_s("x1 = %d \n", x1);
    printf_s("ch1 = %c (%d)\n", ch1, ch1);
    printf_s("f1 = %f \n", f1);

    x1 = x3 - x2;
    f1 = -f2;

    printf_s("x1 = %d \n", x1);
    printf_s("f1 = %f \n", f1);

    x1 = x3 * x2;
    f1 = 3 * f2;

    printf_s("x1 = %d \n", x1);
    printf_s("f1 = %f \n", f1);

    x1, x2 = 9;

    x1 = x2 / 2;
    printf_s("x1 = %d \n", x1);

    f1 = x2 / 2;
    printf_s("f1 = %f \n", f1);

    f2 = x2 / 2.0;
    printf_s("f2 = %f \n", f2);

    f1 = f2 + 10 / 2.0;
    printf_s("f1 = %f \n", f1);

    f1 = (f2 + 10) / 2.0;
    printf_s("f1 = %f \n", f1);

    x1, x2 = 9;
    x1 = x2 % 2;
    printf_s("x1 = %d \n", x1);

    x1 = x2 % 5;
    printf_s("x1 = %d \n", x1);

    system("pause");

    return 0;
}