#include<stdio.h>
#include<string.h>

int main (){
    char s[10]={"bcdnk"};
    char c='a';
    int a=0;
    printf("%s",s);
for(int i=0;s[i]!='\0';i++){
    if(s[i]=='a'){
        a++;
    }
}
 
if(a==0){
    printf("\nthere is  no a");
}else{
    printf("\nthere is %d",a);
}
return 0;
}