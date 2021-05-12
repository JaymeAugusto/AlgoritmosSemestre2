#include<stdio.h>
#include<stdlib.h>
int main(){
	int *p = (int *) malloc(sizeof(int));
	if(p == NULL){
		printf("Erro!!!");
	}
	*p = 10;
	printf("%d",*p);
}
