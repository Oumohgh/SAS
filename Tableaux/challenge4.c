#include<stdio.h>
int main (){
    int n,i;
    printf("Donner taille du tableau :");
    scanf("%d",&n);
    int t[n];
    printf("entrer %d elements:",n);
    for(i=0;i<n;i++){
        scanf("%d",&t[i]);
    }
    return 0;
}