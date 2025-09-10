#include<stdio.h>
#include<string.h>
int main(){
   int i;
   char string[50];
   printf("Entrer une chaine des cara:");
   scanf("%[^\n]",string);
   for(i=0;string[i]!='\0';i++){
      if(string[i]>=97&&string[i]<=122){
         string[i]=string[i]-32;
      }
   }
   printf("\nle chaine modifie :");
   puts(string);
   return 0;
}
