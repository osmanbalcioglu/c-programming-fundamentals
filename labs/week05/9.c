#include <stdio.h>

int main(void) {
    int bakiye = 5000;
    int tutar;

    printf("Cekilecek tutari giriniz: ");
    scanf("%d", &tutar);

    if (tutar <= 0) {
        printf("Gecersiz tutar!\n");
    } else {
        if (tutar > bakiye) {
            printf("Yetersiz bakiye!\n");
        } else {
            if (tutar % 100 != 0) {
                printf("Tutar 100 TL'nin kati olmali.\n");
            } else {
                bakiye = bakiye - tutar;
                printf("Islem basarili.\n");
                printf("Kalan bakiye: %d TL\n", bakiye);
            }
        }
    }

    return 0;
}