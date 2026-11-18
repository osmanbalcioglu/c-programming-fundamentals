#include <stdio.h>
int basamak_sayisi(int k);
int main() {
    int x;
    printf("Sayiyi gir\n");
    scanf("%d", &x);
    int sonuc = basamak_sayisi(x);
    printf("Sonuc: ");
    printf("%d", sonuc);
    return 0;
}
int basamak_sayisi(int s) {
    if (s < 10)
        return 1;
    else
        return 1 + basamak_sayisi(s / 10);
}