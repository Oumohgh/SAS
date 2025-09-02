#include<stdio.h>

int main (){
int r;
float v;
const float pi =3.14;
printf("Veuillez entrer entrer le rayon de la sphere:");
scanf("%d",&r);
v = (4.0f/3.0f) *3.14*r*r*r;
printf("\nLe volume d un sphere est: %.2f",v);
return 0;
}

