#include<stdio.h>
# define file_name "C:/Users/CONFORT TECH/OneDrive/Desktop/Nouveau Fichier PY.txt" //copy le path de votre dosser
# define TMAX 500 
int main(){
	char text[TMAX] ; 
	FILE *file=fopen(file_name , "r");
	if(file!=NULL){
		while ((fgets(text , TMAX , file ))!=NULL){
		printf("%s" , text );
		}
		fclose(file);
		return 0 ;
	} 
	else 
	{
		perror("oups , il y a un problem ");
		return 1 ;
	}
	
}