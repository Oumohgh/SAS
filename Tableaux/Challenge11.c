#include <stdio.h>

int main(){
  int n,old,new;
  printf("entrez size de la tableau:");
  scanf("%d",&n);
  int arr[n];
  for (int  i = 0; i < n; i++)
  {
    printf("entres la valeur %d de tableau old:",i+1);
    scanf("%d",&arr[i]);
  }
    printf("entres la valeur a remplacer:");
    scanf("%d",&old);
  printf("entres la nouvele valeur:");
  scanf("%d",&new);
  return 0;
}