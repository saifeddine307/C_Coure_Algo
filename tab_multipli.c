#include<stdio.h>
void tab_multipli(int N){
	int i ;
	for(i=0;i<=10;i++){
		printf("\n %d x %d = %d" , N , i , N*i);
	}
}
int main(){
	int a ;
	printf("entre le nombre de que vous faire le tableau de multiplication ");
	scanf("%d",&a);
	tab_multipli(a);
	return 0 ;
}