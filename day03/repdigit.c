#include <stdio.h>

int main(void) {
    while (1) {
        int occurrences[10] = {0}; 
        long nombre;

        printf("Entrez un nombre (0 pour quitter) : ");
        scanf("%ld", &nombre);
        if (nombre <= 0)
            break;

        long temp = nombre;
        while (temp > 0) {
            int chiffre = temp % 10;
            occurrences[chiffre]++;
            temp /= 10;
        }

        printf("Chiffres repetes : ");
        int trouve = 0;
        for (int i = 0; i < 10; i++) {
            if (occurrences[i] > 1) {
                printf("%d ", i);
                trouve = 1;
            }
        }
        if (!trouve)
            printf("Aucun");
        printf("\n");
        printf("Chiffre :     ");
        for (int i = 0; i < 10; i++) {
            printf("%d ", i);
        }
        printf("\nOccurrences : ");
        for (int i = 0; i < 10; i++) {
            printf("%d ", occurrences[i]);
        }
        printf("\n\n");
    }
    printf("Programme termin.\n");
    return 0;
}