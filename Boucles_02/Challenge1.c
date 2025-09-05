#include<stdio.h>

int main (){
    int i ,n;
    long m;
    printf("Entrer un nombre:");
    scanf("%d",&n);
    for(i=10;i>=0;i--){
        m=n*i;
        printf("%d*%d=%ld\n",n,i,m);
    }
    return 0;
}
/*#include <stdio.h>
int main() {
    int nombre;
    printf("Entrer une nombre ");
    scanf("%d",&nombre);
   printf("10*%d =%ld\n",nombre,nombre*10);
    printf("9*%d =%ld\n",nombre,nombre*9);
    printf("8*%d =%ld\n",nombre,nombre*8);
    printf("7*%d =%ld\n",nombre,nombre*7);
    printf("6*%d =%ld\n",nombre,nombre*6);
    printf("5*%d =%ld\n",nombre,nombre*5);
    printf("4*%d =%ld\n",nombre,nombre*4);
    printf("3*%d =%ld\n",nombre,nombre*3);
    printf("2*%d =%ld\n",nombre,nombre*2);
    printf("1*%d =%ld\n",nombre,nombre);
    printf("0*%d =0",nombre);
    return 0;
}