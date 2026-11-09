#include <stdio.h>

void parametresizYazdir(void) {
    int sayi;

    printf("a icin bir sayi giriniz: ");
    scanf("%d", &sayi);

    printf("Sonuc: %d\n", sayi * 2 + 5);
}

int parametresizDondur(void) {
    int sayi;

    printf("b icin bir sayi giriniz: ");
    scanf("%d", &sayi);

    return sayi * 2 + 5;
}

int main(void) {
    int sonuc;

    parametresizYazdir();

    sonuc = parametresizDondur();
    printf("Sonuc: %d\n", sonuc);

    return 0;
}