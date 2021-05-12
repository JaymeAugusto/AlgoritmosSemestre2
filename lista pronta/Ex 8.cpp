//Jayme Augusto | GRR 20195529 | Curso de Licenciatura em Computacao | 2º periodo
#include<stdio.h>
int main(){
	int vetor[10], i, media;
	
	for(i=0; i<10; i++){
		scanf("%d",&vetor[i]);
	}
	
	for(i=0; i<10; i++){
		media += vetor[i];
	}
	
	media /= 10;
	printf("A media e %d",media);
	
	
	return 0;
}
