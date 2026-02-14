#include<stdio.h>
# define file_name "C:/Users/CONFORT TECH/OneDrive/Desktop/Nouveau Fichier PY.txt" //copy le path de votre dosser
int main(){
	int c ; 
	FILE *file ;
	file=fopen(file_name , "r");
	if(file!=NULL){
		do{
			c=fgetc(file);
			printf("%c",c);
			
		}while(c!=EOF) ;
		fclose(file);
		return 0 ;
	}
	else
	{
		printf("il y a une probleme dans le fichier de ouverture ");
		return 1 ; 
	}
}