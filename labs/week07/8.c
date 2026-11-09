#include <stdio.h>

int main(void) {
    int sayi;
    int rakam;
    int ters = 0;

    printf("Pozitif bir sayi giriniz: ");
    scanf("%d", &sayi);

    if (sayi <= 0) {
        printf("Pozitif bir sayi giriniz.\n");
        return 0;
    }

    while (sayi > 0) {
        rakam = sayi % 10;
        ters = ters * 10 + rakam;
        sayi = sayi / 10;
    }

    printf("Ters cevrilmis sayi: %d\n", ters);
    return 0;
}