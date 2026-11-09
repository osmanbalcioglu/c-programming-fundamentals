#include <stdio.h>

int main(void) {
    int n;
    int i;

    printf("Bir sayi giriniz: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Lutfen sifir veya daha buyuk bir sayi giriniz.\n");
    } else {
        for (i = 0; i <= n; i++) {
            printf("%d\n", i);
        }
    }

    return 0;
}