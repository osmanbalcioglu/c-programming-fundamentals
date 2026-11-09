#include <stdio.h>

int main(void) {
    int sayi;

    printf("Bir sayi giriniz: ");
    scanf("%d", &sayi);

    if (sayi % 2 == 0) {
        printf("Sayi cifttir.\n");
    } else {
        printf("Sayi tektir.\n");
    }

    return 0;
}