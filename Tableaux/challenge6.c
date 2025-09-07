#include <stdio.h>
int main() {
    int n, i, facteur;

    printf("Donner la taille du tableau : ");
    scanf("%d", &n);
    int t[n];

    printf("Entrer %d elements :\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &t[i]);
    }
    printf("Entrer le facteur de multiplication : ");
    scanf("%d", &facteur);

  
    printf("Tableau aprs multiplication :\n");
    for (i = 0; i < n; i++) {
        t[i] = t[i] * facteur;   
        printf("%d ", t[i]);
    }
    return 0;
}
