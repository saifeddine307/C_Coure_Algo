#include<stdio.h>
int main (){
	int N ; 
	int *p=&N;
	int i ;
	do{
	printf("entre une nombre positive non null ");
	scanf("%d",p);
    }while(*p<=0);
    printf("les divisures de nombre %d est " , *p );
    for(i=1 ; i<=*p ; i++){
    	if(*p % i == 0){
    	printf(" %d ",i);
        }
	}
    return 0 ;
	
}