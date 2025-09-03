#include <stdio.h>

int main() {
    int m;
    int billets20, billets10, billets5, billets1;

    printf("Entrez un montant en dollars : ");
    scanf("%d", &m);
    billets20 = m / 20;
    m = m % 20;

    billets10 = m / 10;
    m = m % 10;

    billets5 = m / 5;
    m = m % 5;

    billets1 = m;  
    printf("Billets de 20$ : %d\n", billets20);
    printf("Billets de 10$ : %d\n", billets10);
    printf("Billets de 5$  : %d\n", billets5);
    printf("Billets de 1$  : %d\n", billets1);
    return 0;
}