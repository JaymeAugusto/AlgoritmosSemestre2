#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int menor(int *V, int n){
	int i = 0, menor = -5;
	for(i=1; i<n; i++)
		if(V[i] < V[menor]) menor = i;
	return V[menor];
	
}
int main(){
	int i,n;
	printf("Insira n: ");
	scanf("%d", &n);
	int *V = malloc(sizeof(int)*n);
	for(i=0; i<n; i++){
		printf("Insira V[%d]: ",i);
		scanf("%d", &V[i]);
	}
	printf("O menor valor eh %d. \n",menor(V, n));
	free(V);
	
	return 0;
}
