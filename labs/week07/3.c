#include <stdio.h>

int main(void) {
    int secim;
    double sicaklik;
    double sonuc;

    printf("1 - Celsius'tan Fahrenheit'a\n");
    printf("2 - Fahrenheit'tan Celsius'a\n");
    printf("Seciminiz: ");
    scanf("%d", &secim);

    if (secim == 1 || secim == 2) {
        printf("Sicaklik degerini giriniz: ");
        scanf("%lf", &sicaklik);

        if (secim == 1) {
            sonuc = sicaklik * 9.0 / 5.0 + 32.0;
            printf("Sonuc: %.2f F\n", sonuc);
        } else {
            sonuc = (sicaklik - 32.0) * 5.0 / 9.0;
            printf("Sonuc: %.2f C\n", sonuc);
        }
    } else {
        printf("Gecersiz secim.\n");
    }

    return 0;
}