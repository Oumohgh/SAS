#include <stdio.h>

int Factorielle(int n) {
    int resultat = 1;
    for (int i = 1; i <= n; i++) {
        resultat = resultat * i;
    }
    return resultat;
}
/*
int main() {
    int nombre = 5;  
    int fact = Factorielle(nombre);
    printf("La factorielle de %d est %d\n", nombre, fact);
    return 0;
}
*/