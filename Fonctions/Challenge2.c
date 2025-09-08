#include <stdio.h>
int Multiplication(int a, int b) {
    int produit = 0;
    produit = a * b;
    return produit;
}

int main() {   
    int resultat = Multiplication(4, 5);
    printf("Le produit de a et b est %d\n", resultat);
    return 0;
}
