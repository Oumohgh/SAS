#include<stdio.h>
#include<string.h>
int main (){
    char ch[30];
    int c=0,i=0;
    printf("Enter un nom:");
    scanf("%s",ch);
    printf("%s",ch);
    while (ch[i] !='\0')
    {
       c++;
       i++;
    }
    printf("\nlen de %s is %d",ch,c);
    return 0;
}