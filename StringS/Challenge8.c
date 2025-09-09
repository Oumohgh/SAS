#include<stdio.h>
int main(){
   int i;
   char string[50];
   printf("Entrer une chaine des cara");
   gets(string);
   for(i=0;string[i]!='\0';i++){
      if(string[i]>=65&&string[i]<=90){
         string[i]=string[i]+32;
      }
   }
   printf("le chaine modifie");
   puts(string);
}