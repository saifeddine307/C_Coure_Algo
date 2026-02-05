#include<stdio.h>
int get_max (int P[10]){
	int max=P[0];
	for(int i=0; i<10 ; i++){
		if(max<P[i]){
			max=P[i];
		}
	}
	return max ;
}
int get_min (int P[10]){
	int min=P[0];
	for(int i=0; i<10 ; i++){
		if(min>P[i]){
			min=P[i];
		}
	}
	return min ;
}
void clasment_croisent (int P[10]){
	for(int i=0;i<10;i++){
		for(int j=i+1;j<10;j++){
			if(P[i]>P[j]){
				int tmp=P[i];
				P[i]=P[j];
				P[j]=tmp;
			}
		}
	}
	for(int i=0;i<10;i++){
	printf("\n P[%d]=%d\n", i , P[i] ); //entre votre nombre de tableau
	}

}
void l_envers_tab (int P[10]){
	int V[10];
	int j=0 ; 
	for(int i=0;i<10;i++){
		V[j]=P[9-i];
		j++;
	}
	for(int i=0;i<10;i++){
	printf("\n P[%d]=%d\n", i , V[i] ); //entre votre nombre de tableau
	}

}

int main(){
	printf("entre la taille de tableau \n ");
	int T[10];
		for(int i=0; i<10 ; i++){
			printf("T[%d]=",i+1);
			scanf("%d",&T[i]);
		}
	printf("\n le nombre max est %d \n ",get_max(T));
	printf("\n le nombre min est %d \n ",get_min(T));
	printf("tableau par l anvers \n ");
	l_envers_tab(T);
	printf("tableau par croisent clasment \n ");
	clasment_croisent(T);
	
	
	return 0 ;
}