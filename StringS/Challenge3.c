#include<stdio.h>
#include<string.h>
<<<<<<< HEAD
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
=======

int main (){
char str1[20];
char str2[20];
strcpy(str1,"Mohammed");
strcpy(str2,"Oughlane");
strcat(str1,str2);
printf("%s",str1);
return 0;

}
>>>>>>> 806359271f6408471fd01f28b504a92945c1f6d2
