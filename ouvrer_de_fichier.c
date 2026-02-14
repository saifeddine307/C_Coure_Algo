#include<stdio.h>
# define file_name "C:/Users/CONFORT TECH/OneDrive/Desktop/Nouveau Fichier PY.txt" //copy le path de votre dosser 
int main(){
	FILE *file ; 
	file = fopen(file_name , "w") ; //wreting mode 
	if(file!=NULL){
		fputs("hello word " , file) ; // pour essai le text 
		fclose(file);
		printf("secces!,le text a ete ecrit dans le fichier.\n") ;
		return 0 ;
	}
	else {
		printf("imposible de ouvrer le fichier %s \n  ", file_name);
		return 1 ;
	}
	
}