#include<stdio.h>
#include<string.h>
int main(){
    char des[10]="moh";
    char sorce[5]="amed";
    printf("entrer 1er une chaine de caratere:");
    scanf("%s",des);
      printf("\nentrer une chaine de caratere:");
    scanf("%s",sorce);
    printf("\nle premier chaine est %s",des);
    printf("\nle duexieme chaine est %s",sorce);
    strcat(des,sorce);
    printf("\n%s");
    return 0;
}
