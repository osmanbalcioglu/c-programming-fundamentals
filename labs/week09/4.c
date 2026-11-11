#include <stdio.h>

int rakamlarToplami(int n)
{
    if (n < 10)
        return n;

    return (n % 10) + rakamlarToplami(n / 10);
}

int main(void)
{
    int sayi;

    printf("Negatif olmayan bir sayi giriniz: ");

    if (scanf("%d", &sayi) != 1)
        return 1;

    if (sayi < 0)
        printf("Gecersiz sayi!\n");
    else
        printf("Rakamlar toplami: %d\n", rakamlarToplami(sayi));

    return 0;
}