//
// Created by maycon on 15/11/2021.
//
#include <stdio.h>
#include <stdlib.h>
int main() {
    int x = 10, y = 10;
    x++;
    ++y;

    printf_s("x = %d \n", x);
    printf_s("y = %d \n", y);

    x--;
    --y;

    printf_s("x = %d \n", x);
    printf_s("y = %d \n", y);

    x = 10, y = 10;
    y = x++; //pos incremento

    printf_s("x = %d \n", x);
    printf_s("y = %d \n", y);

    x = 10;
    y = ++x;

    printf_s("x = %d \n", x);
    printf_s("y = %d \n", y);

    system("pause");

    return 0;
}
