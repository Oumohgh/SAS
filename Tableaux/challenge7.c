#include <stdio.h>

int main() {
    int n, i, j, change;

    printf("Donner la taille du tableau : ");
    scanf("%d", &n);
    int t[n];
    printf("Entrer %d elements :\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &t[i]);
    }
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (t[j] > t[j + 1]) {
                
                change = t[j];
                t[j] = t[j + 1];
                t[j + 1] = change;
            }
        }
    }
    printf("Tableau trie en ordre croissant :\n");
    for (i = 0; i < n; i++) {
        printf("%d ", t[i]);
    }
    return 0;
}
