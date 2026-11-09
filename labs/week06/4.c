#include <stdio.h>

int main(void) {
    int yil;

    printf("Bir yil giriniz: ");
    scanf("%d", &yil);

    if (yil % 4 == 0) {
        if (yil % 100 == 0) {
            if (yil % 400 == 0) {
                printf("Artik yildir.\n");
            } else {
                printf("Artik yil degildir.\n");
            }
        } else {
            printf("Artik yildir.\n");
        }
    } else {
        printf("Artik yil degildir.\n");
    }

    return 0;
}