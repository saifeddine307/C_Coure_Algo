#include<stdio.h>
void bissextile(int anne){
	if((anne%4==0 && anne%100!=0)|| anne%400==0){
		printf("l annee est bissextile") ;
	} else {
		printf("l annee n est pas bissextile");
	}
}

int main(){
	int annee ; 
	printf("entre l annee qui vous virifer ");
	scanf("%d",&annee);
	bissextile(annee);
	return 0 ;
}