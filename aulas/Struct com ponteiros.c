#include<stdio.h>
#include<stdlib.h>
struct Aluno{
	char nome[51];
	float nota[2];
};
int main(){
	struct Aluno *calouro = malloc(sizeof(struct Aluno));
	printf("Insira o nome do aluno: ");
	fgets(calouro->nome, 50, stdin);
	printf("Insira notas: ");
	scanf("%f%f", &(calouro->nota[0]), &(calouro->nota[1]));
	printf("A media de %s eh %f. \n", calouro->nome, (calouro->nota[0]+calouro->nota[1])/2);
	free(calouro);
	return 0;
}	
