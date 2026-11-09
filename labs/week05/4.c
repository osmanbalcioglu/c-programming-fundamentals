#include <stdio.h>

int main(void) {
    int yas;

    printf("Yasinizi giriniz: ");
    scanf("%d", &yas);

    if (yas >= 18) {
        printf("Yas sartini sagliyorsunuz.\n");
    } else {
        printf("Yas sartini saglamiyorsunuz.\n");
    }

    return 0;
}