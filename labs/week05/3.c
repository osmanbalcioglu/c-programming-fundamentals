#include <stdio.h>

int main(void) {
    int sayi;

    printf("Bir sayi giriniz: ");
    scanf("%d", &sayi);

    if (sayi > 0) {
        printf("Pozitif sayi girdiniz.\n");
    }

    return 0;
}