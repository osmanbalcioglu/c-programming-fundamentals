#include <stdio.h>

int ebob(int a, int b)
{
    if (b == 0)
        return a;

    return ebob(b, a % b);
}

int main(void)
{
    int sayi1;
    int sayi2;

    printf("Iki pozitif tam sayi giriniz: ");

    if (scanf("%d %d", &sayi1, &sayi2) != 2)
        return 1;

    if (sayi1 <= 0 || sayi2 <= 0)
        printf("Gecersiz sayilar!\n");
    else
        printf("EBOB(%d, %d) = %d\n", sayi1, sayi2, ebob(sayi1, sayi2));

    return 0;
}