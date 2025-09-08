#include<stdio.h>
int main(){
    int size,i;
    printf("Entrer le nombre d elements:");
    scanf("%d",&size);
    printf("\nEnter les elemnts du tableau:");
    int element[size];
  for(i=0;i<size;i++){
        scanf("%d",&element[i]);
    }
    for(i=size-1;i>=0;i--){
    printf("\n%d",element[i]); 
    }
return 0;
}