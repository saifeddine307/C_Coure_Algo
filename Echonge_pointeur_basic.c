#include<stdio.h>
void echonge(int *a , int *b ){
	int c ,d ;
	if (*a**b>=0){ // if the numbres have the same signe that be change just there valours 
		c=*a ;
		*a=*b ;
		*b=c ;
	}
	else {  
	c=*a+*b ; //if the numbres have a diffrent singe , the first will have the addition betwen 
	d=*a**b ; // it and the secon will have the multiplication 
	*a=c ;
	*b=d ;	
	}
}
int main(){
	int A , B ;
	printf("entre la valeur de nombre a ");
	scanf("%d",&A);
	printf("entre la valeur de nombre b ");
	scanf("%d",&B);
	echonge(&A,&B);
	printf("a=%d // b=%d ", A , B );
	return 0 ;
	
}