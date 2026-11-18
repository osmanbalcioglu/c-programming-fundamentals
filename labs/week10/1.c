#include <stdio.h>
int main(void) {
    int a, b;
    int *ptr1, *ptr2;
    printf("sayi1 giriniz\n");
    scanf("%d", &a);
    printf("sayi2 giriniz\n");
    scanf("%d", &b);
    ptr1 = &a;
    ptr2 = &b;
    int gecici = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = gecici;
    printf("a degeri: %10d\n", a);
    printf("b degeri: %10d\n", b);
    return 0;
}