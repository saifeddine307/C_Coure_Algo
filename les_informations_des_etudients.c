#include<stdio.h>
# define file_name "C:/Users/CONFORT TECH/OneDrive/Desktop/Nouveau Fichier PY.txt" //copy le path de votre dosser
typedef struct{
	char nom[30] , prenom[30] ;
	int age ;
}Etudient;
int main(){
	FILE *file ;
	Etudient e[5] ;
	int i ; 
	file =fopen(file_name , "w") ;
	if(file != NULL ){
		for(i=0 ; i<5 ; i++){
			printf("entre le nom ");
			scanf("%s",e[i].nom);
			printf("entre le prenom ");
			scanf("%s",e[i].prenom);
			printf("entre l age ");
			scanf("%d",&e[i].age);
			fprintf(file , "\n %s  %s  %d \n " , e[i].nom , e[i].prenom , e[i].age );
			
		}
		fclose(file);
		return 0 ;
	}
	else {
		printf("imposible de ouverture le fichier ! %s " , file_name);
		return 1 ;
	}
}