#include <stdio.h>

int main(void) {
    int gizliSayi = 37;
    int tahmin;
    int deneme = 0;

    do {
        printf("Tahmininizi giriniz: ");
        scanf("%d", &tahmin);
        deneme++;

        if (tahmin < gizliSayi) {
            printf("Daha buyuk bir sayi giriniz.\n");
        } else if (tahmin > gizliSayi) {
            printf("Daha kucuk bir sayi giriniz.\n");
        }
    } while (tahmin != gizliSayi);

    printf("Tebrikler! Dogru tahmin.\n");
    printf("Deneme sayisi: %d\n", deneme);

    return 0;
}