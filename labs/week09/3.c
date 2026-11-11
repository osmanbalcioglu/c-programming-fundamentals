#include <stdio.h>

long long toplamiHesapla(int n)
{
    if (n <= 0)
        return 0;

    return n + toplamiHesapla(n - 1);
}

int main(void)
{
    int n;

    printf("N degerini giriniz: ");

    if (scanf("%d", &n) != 1)
        return 1;

    if (n < 1)
        printf("Gecersiz sayi!\n");
    else
        printf("Toplam: %lld\n", toplamiHesapla(n));

    return 0;
}