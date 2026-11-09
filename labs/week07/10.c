#include <stdio.h>

int asalMi(int sayi) {
    int i;

    if (sayi < 2) {
        return 0;
    }

    for (i = 2; i <= sayi / i; i++) {
        if (sayi % i == 0) {
            return 0;
        }
    }

    return 1;
}

int main(void) {
    int sayi;

    printf("Bir sayi giriniz: ");
    scanf("%d", &sayi);

    if (asalMi(sayi)) {
        printf("%d asal bir sayidir.\n", sayi);
    } else {
        printf("%d asal bir sayi degildir.\n", sayi);
    }

    return 0;
}