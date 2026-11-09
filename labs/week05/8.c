#include <stdio.h>

int main(void) {
    int notu;

    printf("Notunuzu giriniz (0-100): ");
    scanf("%d", &notu);

    if (notu < 0 || notu > 100) {
        printf("Gecersiz not!\n");
    } else if (notu >= 90) {
        printf("AA\n");
    } else if (notu >= 80) {
        printf("BA\n");
    } else if (notu >= 70) {
        printf("BB\n");
    } else if (notu >= 60) {
        printf("CB\n");
    } else if (notu >= 50) {
        printf("CC\n");
    } else {
        printf("FF\n");
    }

    return 0;
}