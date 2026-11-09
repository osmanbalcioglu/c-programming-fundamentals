#include <stdio.h>

int main(void) {
    char karakter;

    printf("Bir karakter giriniz: ");
    scanf(" %c", &karakter);

    if ((karakter >= 'A' && karakter <= 'Z') ||
        (karakter >= 'a' && karakter <= 'z')) {
        printf("Girilen karakter bir harftir.\n");
    } else {
        printf("Girilen karakter harf degildir.\n");
    }

    return 0;
}