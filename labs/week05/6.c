#include <stdio.h>

int main(void) {
    int sayi;

    printf("Bir sayi giriniz: ");
    scanf("%d", &sayi);

    if (sayi > 0) {
        printf("Pozitif sayi.\n");
    } else if (sayi < 0) {
        printf("Negatif sayi.\n");
    } else {
        printf("Sayi sifirdir.\n");
    }

    return 0;
}