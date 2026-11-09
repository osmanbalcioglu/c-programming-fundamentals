#include <stdio.h>

int main(void) {
    int sayi;
    int i;

    printf("1 ile 10 arasinda bir sayi giriniz: ");
    scanf("%d", &sayi);

    if (sayi < 1 || sayi > 10) {
        printf("Gecersiz sayi.\n");
    } else {
        for (i = 1; i <= 10; i++) {
            printf("%d x %d = %d\n", sayi, i, sayi * i);
        }
    }

    return 0;
}