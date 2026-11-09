#include <stdio.h>

int main(void) {
    int sayi = 10;
    float sayiFloat = 25.30f;
    double sayiDouble = 45.56;
    char karakter = 'A';

    printf("int: %d\n", sayi);
    printf("float: %.2f\n", sayiFloat);
    printf("double: %.2f\n", sayiDouble);
    printf("char: %c\n", karakter);

    return 0;
}