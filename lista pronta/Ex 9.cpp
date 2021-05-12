//Jayme Augusto | GRR 20195529 | Curso de Licenciatura em Computacao | 2º periodo
#include<stdio.h>
int main(){
	int vetor[10],i,aux;
	
	for(i=0; i<10; i++){
		scanf("%d",&vetor[i]);
	}
	
	for(i=0; i<5; i++){
		aux = vetor[i];
		vetor[i] = vetor[9-i];
		vetor[9-i] = aux;
	}
	
	for(i=0; i<10; i++){
		printf("%d ",vetor[i]);
	}
	
	return 0;
}
