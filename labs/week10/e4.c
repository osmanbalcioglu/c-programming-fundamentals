#include <stdio.h>
void yildiz(int k) {
    if (k == 0)
        return;
    printf("*");
    yildiz(k - 1);
}
void ucgen(int n) {
    if (n == 0)
        return;
    ucgen(n - 1);
    yildiz(n);
    printf("\n");
}
int main() {
    int n;
    printf("Satir sayisi: ");
    scanf("%d", &n);
    ucgen(n);
    return 0;
}