#include<stdio.h>
	int main (){
	   int n,i,s=0;
  
	    printf("Donner la taille du tableau:");
	     
	    scanf("%d",&n);
	    int t[n];
	    printf("enter %d elements:",n);
	for(i=0;i<n;i++){
	    scanf("\n%d",&t[i]);
	}
	for(i=0;i<n;i++){
	    s=s+t[i];
	  
	}
      printf("\n%d",s);
	return 0;
	}