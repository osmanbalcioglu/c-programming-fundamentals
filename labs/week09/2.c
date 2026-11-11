#include <stdio.h>

void bolenleriYazdir(int sayi)
{
    long long i;

    if (sayi <= 0)
    {
        printf("Gecersiz sayi!\n");
        return;
    }

    printf("Bolenler:\n");

    for (i = 1; i <= sayi; i++)
    {
        if (sayi % i == 0)
            printf("%lld\n", i);
    }
}

int main(void)
{
    int sayi;

    printf("Pozitif bir tam sayi giriniz: ");

    if (scanf("%d", &sayi) != 1)
        return 1;

    bolenleriYazdir(sayi);

    return 0;
}