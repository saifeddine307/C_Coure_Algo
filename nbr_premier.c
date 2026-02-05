#include<stdio.h>
void nbr_premier(int N){
	int est_premier=1 ;
	for(int i=2;i<N/2;i++){
		if(N/i==0){
			est_premier=0 ;
			break ;
		} 	
	}
	if(est_premier==1){
			printf("le nombre %d est premier ",N);
		} else {
			printf("le nombre %d n est pas premier ", N);
		}
}

int main(){
	int nbr ;
	printf("entre un nobre pour la virifer ");
	scanf("%d",&nbr);
	nbr_premier(nbr);
	return 0 ;
}