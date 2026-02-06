#include<stdio.h>
int main(){
	int n ; 
	int T[100];
	int *p;
	int min;
	int max ;
	printf("entre la taille de tableaux ");
	scanf("%d",&n);
	printf("entre les element de tableaux \n ");
	for(p=T ; p<T+n ; p++){
		printf("T[%d]= ",p-T);
		scanf("%d",p);
	}
	min=*T;
	for(p=T ; p<T+n ; p++){
		if(min>*p)
		min=*p ;
	}
	printf("\n le min est %d \n  " , min );
	max=*T;
	for(p=T ; p<T+n ; p++){
		if(max<*p)
		max=*p ;
	}
	printf("le max est %d " , max );
	return 0 ;
	
}