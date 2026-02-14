#include<stdio.h>
# define file_name "C:/Users/CONFORT TECH/OneDrive/Desktop/Nouveau Fichier PY.txt" //copy le path de votre dosser
void lire_text(FILE *file){
	int c ; 
	while((c=fgetc(file))!=EOF){
		printf("%c",c);
	}
}
int main(){
	FILE *file=fopen(file_name , "r");
	if(file!=NULL){
		lire_text(file);
		fclose(file);
		return 0 ;
	}
	else
	{
		perror("echoe ! ");
		return 1 ;
	}
}