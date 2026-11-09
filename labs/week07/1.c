#include <stdio.h>

int main(void) {
    char harf = 'A';

    printf("Buyuk harfler:\n");
    while (harf <= 'Z') {
        printf("%c ", harf);
        harf++;
    }

    harf = 'a';

    printf("\nKucuk harfler:\n");
    while (harf <= 'z') {
        printf("%c ", harf);
        harf++;
    }

    printf("\n");
    return 0;
}