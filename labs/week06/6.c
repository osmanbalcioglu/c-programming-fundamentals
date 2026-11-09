#include <stdio.h>

int main(void) {
    int n;
    int sayi = 1;

    printf("Bir sayi giriniz: ");
    scanf("%d", &n);

    while (sayi <= n) {
        printf("%d\n", sayi);
        sayi += 2;
    }

    return 0;
}