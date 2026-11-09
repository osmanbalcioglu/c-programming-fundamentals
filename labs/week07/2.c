#include <stdio.h>

int main(void) {
    int i;
    int j;
    char harf = 'A';

    for (i = 1; i <= 4; i++) {
        for (j = 1; j <= i; j++) {
            printf("%c ", harf);
            harf++;
        }
        printf("\n");
    }

    return 0;
}