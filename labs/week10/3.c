#include <stdio.h>
void degerArtir(int sayi);
void degerArtirP(int *sayi);
int main(void) {
    int deger;
    printf("Deger giriniz\n");
    scanf("%d", &deger);
    printf("Baslangic degeri %d\n", deger);
    degerArtir(deger);
    printf("Sonra degeri %d\n", deger);
    degerArtirP(&deger);
    printf("Sonra degeri %d\n", deger);
    return 0;
}
void degerArtir(int sayi) {
    sayi = sayi + 10;
}
void degerArtirP(int *sayi) {
    *sayi = *sayi + 10;
}