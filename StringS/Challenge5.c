#include<stdio.h>
#include<string.h>

int main (){
    char reverse[10] ;
    printf("entrer un nom:");
    scanf("%[^\n]",reverse);
    int l=strlen(reverse),i;
        for( i=0;i<l/2;i++){
            char r;
            r=reverse[i];
            reverse[i]=reverse[l-i-1];
            reverse[l-i-1]=r;
        }
            printf("%s",reverse);
        return 0;
        }