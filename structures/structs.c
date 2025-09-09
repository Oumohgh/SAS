#include <stdio.h>
#include <string.h>
struct Etudiant {
char nom[20];
int age;
float note;
};

int main() {
    int n;
    printf("Combien d'etudiants ? ");
    scanf("%d", &n);

    struct Etudiant classe[n];
    for (int i = 0; i < n; i++) {
        printf("Nom: ");
        scanf("%s", classe[i].nom);
        printf("\nAge: ");
        scanf("%d", &classe[i].age);
        printf("\nNote: ");
        scanf("%f", &classe[i].note);
    }
    return 0;
}