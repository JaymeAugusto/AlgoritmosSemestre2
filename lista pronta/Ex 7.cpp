//Jayme Augusto | GRR 20195529 | Curso de Licenciatura em Computacao | 2º periodo
#include<stdio.h>
int main(){
	int vetor[10], i, menor;
	
	for(i=0; i<10; i++){
		scanf("%d",&vetor[i]);
	}
	
	for(i=0; i<10; i++){
		if(i==0){
			menor = vetor[i];
		}
		if(menor > vetor[i]){
			menor = vetor[i];
		}
	}
	printf("O menor e : %d",menor);
}
