#include <stdio.h>
int tersCevir(int n, int ters) {
    if (n == 0)
        return ters;
    return tersCevir(n / 10, ters * 10 + (n % 10));
}
int main() {
    int n;
    printf("Bir sayi giriniz: ");
    scanf("%d", &n);
    if (n < 0) {
        printf("Negatif sayilarda palindrom kontrolu yapilmaz!\n");
        return 0;
    }
    int tersi = tersCevir(n, 0);
    if (n == tersi)
        printf("%d bir palindromdur.\n", n);
    else
        printf("%d bir palindrom degildir.\n", n);
    return 0;
}