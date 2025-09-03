#include<stdio.h>
int main (){
   int n,i;
   int t[n];
    printf("Donner la taille du tableau:");
    scanf("%d",&n);
    printf("enter %d elements:",n);
for(i=0;i<n;i++){
    scanf("\n%d",&t[i]);
}
for(i=0;i<n;i++){
    
    printf("\n%d",t[i]);
}
return 0;
}