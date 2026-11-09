#include <stdio.h>

double celsiusToFahrenheit(double celsius) {
    return celsius * 9.0 / 5.0 + 32.0;
}

double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32.0) * 5.0 / 9.0;
}

int main(void) {
    int secim;
    double sicaklik;

    printf("1 - Celsius'tan Fahrenheit'a\n");
    printf("2 - Fahrenheit'tan Celsius'a\n");
    printf("Seciminiz: ");
    scanf("%d", &secim);

    if (secim == 1 || secim == 2) {
        printf("Sicaklik degerini giriniz: ");
        scanf("%lf", &sicaklik);

        if (secim == 1) {
            printf("Sonuc: %.2f F\n", celsiusToFahrenheit(sicaklik));
        } else {
            printf("Sonuc: %.2f C\n", fahrenheitToCelsius(sicaklik));
        }
    } else {
        printf("Gecersiz secim.\n");
    }

    return 0;
}