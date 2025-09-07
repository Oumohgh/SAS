#include <stdio.h>
#include <stdbool.h>   
int main(void) {
    bool chiffre_vu[10] = {false}; 
    int chiffre;
    long nombre;

    printf("Entrez un nombre : ");
    scanf("%ld", &nombre);

    while (nombre > 0) {
        chiffre = nombre % 10;             
        if (chiffre_vu[chiffre]) {         
            break;                          
        }
        chiffre_vu[chiffre] = true;         
        nombre /= 10;     
    }
    if (nombre > 0)
        printf("Des chiffres sont répétés.\n");
    else
        printf("Aucun chiffre répété.\n");

    return 0;
}