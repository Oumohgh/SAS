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
    for(i=0;i<n;i++){
    printf("\n%der element est: %d",i+1,t[i]);
}
int min=t[0];
for(i=0;i<n;i++){
   if (t[i]<min)
   {
    min =t[i];
   }
}
 printf("\nle Minimum est %d",min);
    return 0;
}