#include<stdio.h>
int a , b ;
void saisir (){
	printf("entre la valeur de a \n");
	scanf("%d" , &a);
	printf("entre la valeur de b \n");
	scanf("%d" , &b);	
}
void signe(){
	if(a*b>0)
	printf("les nombre sont meme \n ");
	else
	printf("les nombre sont defirent\n ");
}
int get_max(int x , int y){
	int max ;
	if(x>y)
	max=x;
	else
	max=y;
	return max ;
}
int get_min(int x , int y){
	int min ; 
	if(x<y)
	min=x;
	else
	min=y;
	return min ; 
}
int main(){
	int max , min ;
	saisir();
	signe();
	max=get_max(a,b);
	min=get_min(a,b);
	printf("le min est %d \n ",min);
	printf("le max est %d \n ",max);
	return 0 ;
}