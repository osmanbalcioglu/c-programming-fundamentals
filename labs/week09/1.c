#include <stdio.h>
#include <math.h>

int kare(int sayi)
{
    return sayi * sayi;
}

float karekok(int sayi)
{
    return (float)sqrt((double)sayi);
}

int main(void)
{
    int sayi;

    printf("-1000 ile 1000 arasinda bir sayi giriniz: ");

    if (scanf("%d", &sayi) != 1)
        return 1;

    if (sayi < -1000 || sayi > 1000)
    {
        printf("Gecersiz sayi!\n");
        return 0;
    }

    printf("Kare: %d\n", kare(sayi));

    if (sayi < 0)
        printf("Karekok: Gercek sayilarda tanimsiz\n");
    else
        printf("Karekok: %.2f\n", karekok(sayi));

    return 0;
}