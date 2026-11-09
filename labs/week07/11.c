#include <stdio.h>

void bolenleriYazdir(int n) {
    int i;

    printf("Bolenler: ");

    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d ", i);
        }
    }

    printf("\n");
}

int bolenToplami(int n) {
    int i;
    int toplam = 0;

    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            toplam += i;
        }
    }

    return toplam;
}

int main(void) {
    int sayi;

    printf("Pozitif bir sayi giriniz: ");
    scanf("%d", &sayi);

    if (sayi <= 0) {
        printf("Pozitif bir sayi giriniz.\n");
        return 0;
    }

    bolenleriYazdir(sayi);
    printf("Bolenlerin toplami: %d\n", bolenToplami(sayi));

    return 0;
}