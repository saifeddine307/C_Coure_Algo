#include<stdio.h>
# define file_name "C:/Users/CONFORT TECH/OneDrive/Desktop/Nouveau Fichier PY.txt" //copy le path de votre dosser
int main(){
	int N , i ;
	printf("entre la valeur de N");
	scanf("%d",&N);
	FILE *file=fopen(file_name , "w");
	if(file!=NULL){
		for(i=0 ; i<=N ; i++){
			fprintf(file , "%d \t " , i);
		}
		fclose(file);
		return 0 ;
	} else {
		perror("error !! ") ;
		return 1 ;
	}
	
}