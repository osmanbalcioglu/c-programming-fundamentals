#include <stdio.h>

int main(void) {
    char karakter;

    printf("Bir karakter giriniz: ");
    scanf(" %c", &karakter);

    if (karakter >= 'A' && karakter <= 'Z') {
        printf("Buyuk harftir.\n");
    } else {
        if (karakter >= 'a' && karakter <= 'z') {
            printf("Kucuk harftir.\n");
        } else {
            printf("Harf degildir.\n");
        }
    }

    return 0;
}