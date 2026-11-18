#include <stdio.h>
int main() {
    int a, b;
    int *ptr;
    printf("Birinci sayiyi giriniz: ");
    scanf("%d", &a);
    printf("Ikinci sayiyi giriniz: ");
    scanf("%d", &b);
    ptr = &a;
    printf("Pointerin tuttugu adres: %p\n", (void *)ptr);
    printf("Pointerin gosterdigi deger: %d\n", *ptr);
    *ptr = *ptr + 10;
    ptr = &b;
    printf("Pointerin yeni adresi: %p\n", (void *)ptr);
    printf("Pointerin gosterdigi yeni deger: %d\n", *ptr);
    *ptr = *ptr - 5;
    printf("a'nin son degeri: %d\n", a);
    printf("b'nin son degeri: %d\n", b);
    return 0;
}