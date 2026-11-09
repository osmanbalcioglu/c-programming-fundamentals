#include <stdio.h>

int main(void) {
    int yil;

    printf("Bir yil giriniz: ");
    scanf("%d", &yil);

    if (yil % 400 == 0 || (yil % 4 == 0 && yil % 100 != 0)) {
        printf("Artik yil.\n");
    } else {
        printf("Artik yil degil.\n");
    }

    return 0;
}