#include<stdio.h>
# define file_name "example1.txt" //copy le path de votre dosser 
int main(){
	FILE *file ; 
	file = fopen(file_name , "r") ; //reading mode 
	if(file!=NULL){
		printf("ouvreture avec succe") ;
	}
	else {
		perror("Erreur") ;
	}
	fclose(file);
	return 0 ;
}