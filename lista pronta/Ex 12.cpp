//Jayme Augusto | GRR 20195529 | Curso de Licenciatura em Computacao | 2º periodo
#include<stdio.h>
int main(){
	int n, n0, r, i;
	printf("Digite quantas vezes deseja fazer a progressao: ");
	scanf("%d",&n);
	printf("\n Digite o primeiro numero da progressao: ");
	scanf("%d",&n0);
	printf("\n Digite a razao da progressao: ");
	scanf("%d",&r);
	
	for(i=0; i<n; i++){
		printf("[%d]  ", n0);
		n0 *= r;
	}
	
	return 0;
}
