#include<stdio.h>
int cube(int nbr){
	int C= nbr*nbr*nbr ;
	return C ; 
}
int main(){
	int n ;
	printf("\n entre la valure qui vous fair la cube ");
	scanf("%d" , &n);
	int P=cube(n);
	printf("\n la valure cube de %d est %d \n" , n , P);
	return 0 ;
}