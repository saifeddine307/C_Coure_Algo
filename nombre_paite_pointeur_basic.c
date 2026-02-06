#include<stdio.h>
int main(){
	int n ; 
	int *p=&n ;
	printf(" entre le nombre que verefier est pair  ");
	scanf("%d",p);
	printf("\n");
	if(*p%2==0)
	printf("le nombre est pair ");
	else 
	printf("le nombre n est pas pair ");
	return 0 ;
}