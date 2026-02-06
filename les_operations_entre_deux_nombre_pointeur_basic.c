#include<stdio.h>
int main() {
	float A, B, *P1, *P2 ;
	P1= &A ; 
	P2= &B ;
	printf("saisir le nombre A ");
	scanf("%f",P1);
	printf("saisir le nombre B ");
	scanf("%f",P2);
	printf("%.2f + %.2f = %.2f \n ",*P1,*P2,(*P1+*P2));
	printf("%.2f - %.2f = %.2f \n",*P1,*P2, (*P1-*P2));
	printf("%.2f * %.2f = %.2f  \n",*P1,*P2,(*P1**P2));
	
	if(*P2==0)
	printf("Errur ne division pas sur \n ");
	else 
	printf("%.2f / %.2f = %.2f  \n", *P1 , *P2 , ((*P1) / (*P2)) ) ;
	
	return 0 ;
}