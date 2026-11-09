#include <stdio.h>

void alanYazdir(double yaricap) {
    double alan = 3.141592653589793 * yaricap * yaricap;
    printf("Alan: %.2f\n", alan);
}

double alanDondur(double yaricap) {
    return 3.141592653589793 * yaricap * yaricap;
}

int main(void) {
    double yaricap;

    printf("Dairenin yaricapini giriniz: ");
    scanf("%lf", &yaricap);

    if (yaricap < 0) {
        printf("Yaricap negatif olamaz.\n");
        return 0;
    }

    alanYazdir(yaricap);
    printf("Dondurulen alan: %.2f\n", alanDondur(yaricap));

    return 0;
}