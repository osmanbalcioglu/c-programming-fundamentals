#include <stdio.h>
int main(void) {
    int a, b, c;
    int *ptr1, *ptr2, *ptr3;
    int *max;
    printf("Sayi1 girin\n");
    scanf("%d", &a);
    printf("Sayi2 girin\n");
    scanf("%d", &b);
    printf("Sayi3 girin\n");
    scanf("%d", &c);
    ptr1 = &a;
    ptr2 = &b;
    ptr3 = &c;
    max = ptr1;
    if (*ptr2 > *max)
        max = ptr2;
    if (*ptr3 > *max)
        max = ptr3;
    printf("en buyuk sayi : %20d\n", *max);
    return 0;
}