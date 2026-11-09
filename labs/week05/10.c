#include <stdio.h>

int main(void) {
    int secim;
    float sayi1;
    float sayi2;

    printf("1- Toplama\n");
    printf("2- Cikarma\n");
    printf("3- Carpma\n");
    printf("4- Bolme\n");

    printf("Islem seciniz: ");
    scanf("%d", &secim);

    printf("Birinci sayi: ");
    scanf("%f", &sayi1);

    printf("Ikinci sayi: ");
    scanf("%f", &sayi2);

    switch (secim) {
        case 1:
            printf("Sonuc: %.2f\n", sayi1 + sayi2);
            break;
        case 2:
            printf("Sonuc: %.2f\n", sayi1 - sayi2);
            break;
        case 3:
            printf("Sonuc: %.2f\n", sayi1 * sayi2);
            break;
        case 4:
            if (sayi2 != 0) {
                printf("Sonuc: %.2f\n", sayi1 / sayi2);
            } else {
                printf("Sifira bolme yapilamaz!\n");
            }
            break;
        default:
            printf("Gecersiz islem!\n");
    }

    return 0;
}