#include <stdio.h>
#include <string.h>
struct Etudiant {
    char nom[50];
    char prenom[50];
    int notes[N_NOTES];
};

int main() {
    struct Etudiant etu;
    strcpy(etu.nom, "Ough");
    strcpy(etu.prenom, "Mo");

    etu.notes[0] = 12;
    etu.notes[1] = 15;
    etu.notes[2] = 9;
    etu.notes[3] = 18;
 etu.notes[4] = 14;
    printf("Informations de l'etudiant :\n");
    printf("Nom    : %s\n", etu.nom);
    printf("Prenom : %s\n", etu.prenom);
    printf("Notes  : ");
    for (int i = 0; i < N_NOTES; i++) {
        printf("%d ", etu.notes[i]);
    }
    printf("\n");
    return 0;
}
