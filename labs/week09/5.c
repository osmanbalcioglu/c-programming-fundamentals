#include <stdio.h>

int basamakSayisi(int n)
{
    if (n < 10)
        return 1;

    return 1 + basamakSayisi(n / 10);
}

int main(void)
{
    int sayi;

    printf("Pozitif bir sayi giriniz: ");

    if (scanf("%d", &sayi) != 1)
        return 1;

    if (sayi <= 0)
        printf("Gecersiz sayi!\n");
    else
        printf("Basamak sayisi: %d\n", basamakSayisi(sayi));

    return 0;
}