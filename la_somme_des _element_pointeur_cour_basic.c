#include<stdio.h>
int main (){
	int n ; // la nombre des element qui vous entrez
	int T[100]; // tableau de 100 case 
	int *p ; // pointeur par * 
	int s ; // pour la somme 
	p=T ;
	
	printf("entre la taille de table T \n ");
	scanf("%d",&n);
	printf("saisir les element de tableau T \n ");
	for(p=T ; p<T+n ; p++){
		printf("T[%d]= ",p-T);
		scanf("%d",p);
	}
	s=0 ;
	for(p=T ; p<T+n ; p++){
		s=s+*p ;
	}
	printf("la somme des element de tableau est = %d " , s);
	return 0 ;
}