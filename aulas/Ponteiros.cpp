#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	int a = sizeof(int);
	int *aux = malloc(a); //sizeof da o tamanho em bytes de uma variavel
	*aux = 5;
	printf("%d %d \n",aux, *aux);
	free(aux);	
	
	return 0;
	
}
