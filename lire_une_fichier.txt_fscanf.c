#include<stdio.h>
# define file_name "C:/Users/CONFORT TECH/OneDrive/Desktop/Nouveau Fichier PY.txt" //copy le path de votre dosser
int main(){
    int i ; 
	FILE *file=fopen(file_name , "r");
	if(file!=NULL){
		while(!feof(file)){
		    fscanf(file,"%d",&i);
			printf("le nombre est %d " , i);
		}
		fclose(file);
		return 0 ;
	} 
	else 
	{
	perror("il y a une erreur virifie ") ;	
	return 1 ;
	}
	
}