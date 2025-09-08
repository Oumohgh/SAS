#include<stdio.h>
int main (){
    int n,i;
    printf("Donner taille du tableau :");
    scanf("%d",&n);
    int original[n];
    printf("entrer %d elements:",n);
    for(i=0;i<n;i++){
        scanf("%d",&original[i]);
    }
    for(i=0;i<n;i++){
    printf("\n%der element de original tableau est: %d",i+1,original[i]);
    }
    int copie[n];
        for(i=0;i<n;i++){
            copie[i]=original[i];
        }
        for(i=0;i<n;i++){
    printf("\n%der element de copie tableau est: %d",i+1,copie[i]);
    }
    return 0;
}