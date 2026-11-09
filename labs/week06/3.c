#include <stdio.h>

int main(void) {
    int ay;

    printf("1-12 arasinda bir ay numarasi giriniz: ");
    scanf("%d", &ay);

    switch (ay) {
        case 1:
            printf("Ocak 31 gundur.\n");
            break;
        case 2:
            printf("Subat 28 veya 29 gundur.\n");
            break;
        case 3:
            printf("Mart 31 gundur.\n");
            break;
        case 4:
            printf("Nisan 30 gundur.\n");
            break;
        case 5:
            printf("Mayis 31 gundur.\n");
            break;
        case 6:
            printf("Haziran 30 gundur.\n");
            break;
        case 7:
            printf("Temmuz 31 gundur.\n");
            break;
        case 8:
            printf("Agustos 31 gundur.\n");
            break;
        case 9:
            printf("Eylul 30 gundur.\n");
            break;
        case 10:
            printf("Ekim 31 gundur.\n");
            break;
        case 11:
            printf("Kasim 30 gundur.\n");
            break;
        case 12:
            printf("Aralik 31 gundur.\n");
            break;
        default:
            printf("Gecersiz ay numarasi.\n");
    }

    return 0;
}