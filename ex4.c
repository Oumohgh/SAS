#include<stdio.h>

int main () {
float m,tax;
printf("Enter  le montant en dollars : ");
scanf("%f",&m);
tax= m * 0.05;
printf("\nle montant avec le tax ajoutee est %.2f",m+tax);
return 0;

}