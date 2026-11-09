#include <stdio.h>

int main(void) {
    int a;
    int b;

    printf("Birinci sayiyi giriniz: ");
    scanf("%d", &a);

    printf("Ikinci sayiyi giriniz: ");
    scanf("%d", &b);

    if (a > b) {
        printf("Buyuk sayi: %d\n", a);
    } else if (b > a) {
        printf("Buyuk sayi: %d\n", b);
    } else {
        printf("Iki sayi esittir.\n");
    }

    return 0;
}