#include <stdio.h>

int main(void) {
    int satirSayisi;
    int i;
    int j;

    printf("Satir sayisini giriniz: ");
    scanf("%d", &satirSayisi);

    for (i = 1; i <= satirSayisi; i++) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}