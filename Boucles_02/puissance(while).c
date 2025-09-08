#include<stdio.h>

int main() {
    int base, expo;
    int resultat = 1;//n asummiw bli res true
    printf("Entrez la base (positive) : ");
    scanf("%d", &base);

    printf("Entrez l'exposant (non negatif) : ");
    scanf("%d", &expo);
    int i = expo;      
    while (i > 0) {
        resultat = resultat * base;  
        i--;                         
    }

    printf("%d^%d = %d\n", base, expo, resultat);
    return 0;
}


