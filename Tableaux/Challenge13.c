#include<stdio.h>

int main (){
int n,i,j,pair=0;
    printf("Donner la taille du tableau : ");
    scanf("%d", &n);
    int t[n];
    printf("\nEntrer %d elements :\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &t[i]);
    }
    printf("\nLes elements impair sont:");
    for(i=0;i<n;i++){
        if(t[i] %2!=0){
               printf("\n%d",t[i]);
        }
    }
    return 0;
}