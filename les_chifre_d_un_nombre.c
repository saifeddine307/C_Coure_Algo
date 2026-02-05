#include<stdio.h>
int nbr_chifre(long nbr){
	int compture=0 ;
	do{
		nbr=nbr/10 ;
		compture++ ;
	}while(nbr!=0);
	return compture  ;
}
int main(){
	long N ;
	printf("entre le long nobre pour virifer les chifre ");
	scanf("%d",&N);
	printf("le nombre %d il y a %d chifres",N,nbr_chifre(N));
	return 0 ;
}