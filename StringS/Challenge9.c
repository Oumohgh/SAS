#include <stdio.h>

int main() {
    char chaine[100];
    int i = 0, j = 0;

    printf("Entrez une chaine de caracteres : ");
   scanf()

    // Suppression des espaces
    while (chaine[i] != '\0') {
        if (chaine[i] != ' ') {
            chaine[j] = chaine[i]; 
        }
        i++;
    }
    chaine[j] = '\0'; 

    printf("Chaine sans espaces : %s\n", chaine);

    return 0;
}
