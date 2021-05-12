#include<stdio.h>
#define CAPACIDADE 6
#define ERRO_FILA_VAZIA -1

typedef int TFila;

struct Fila {
	TFila dados[CAPACIDADE];
	int inicio, fim;
};

void enfileirar(struct Fila *f, TFila valor){
	if(f->inicio == f->fim + 1 || (f->inicio == 0 && f->fim == CAPACIDADE - 1)) 
		printf("Erro: fila cheia.\n");
	else{
		f-> dados[f-> fim] = valor;
		f-> fim++;
		if(f-> fim == CAPACIDADE)
			f-> fim = 0;
	}
}

TFila desenfileirar(struct Fila *f){
	if(f-> inicio == f-> fim){
		printf("Erro: fila vazia.\n");
		return ERRO_FILA_VAZIA;
	}else{
		TFila valor = f-> dados[f-> inicio];
		f-> inicio++ ;
		if(f-> inicio == CAPACIDADE)
			f-> inicio = 0;
		return valor;	
	}
}

void imprimir_fila(struct Fila *f){
	int i;
	printf("\n");
	for(i=0; i<CAPACIDADE; i++){
		if(f->inicio <= i && i< f->fim || (f->fim < f->inicio &&(i <f->fim || i>= f->inicio)))
			printf("| %2d ",f->dados[i]);
		else
			printf("| -- ",f->dados[i]);
			
	}
	printf("|\n\n\n");
}

int main(){
	struct Fila f;
	f.inicio = f.fim = 0;
	TFila valor;
	/*
	printf("Inserindo 2...\n"); enfileirar(&f, 2);
	printf("Inserindo 3...\n"); enfileirar(&f, 3);
	printf("Inserindo 0...\n"); enfileirar(&f, 0);
	printf("Desenfileirar..."); valor = desenfileirar(&f);
	if(valor != ERRO_FILA_VAZIA) printf("%d\n", valor);
	printf("Desenfileirar..."); valor = desenfileirar(&f);
	if(valor != ERRO_FILA_VAZIA) printf("%d\n", valor);
	printf("Iserindo 7...\n"); enfileirar(&f, 7);
	printf("Desenfileirar..."); valor = desenfileirar(&f);
	if(valor != ERRO_FILA_VAZIA) printf("%d\n", valor);
	printf("Desenfileirar..."); valor = desenfileirar(&f);
	if(valor != ERRO_FILA_VAZIA) printf("%d\n", valor);
	printf("Desenfileirar..."); valor = desenfileirar(&f);
	if(valor != ERRO_FILA_VAZIA) printf("%d\n", valor);
	printf("Desenfileirar..."); valor = desenfileirar(&f);
	if(valor != ERRO_FILA_VAZIA) printf("%d\n", valor);*/
	
	int opcao = 1;
	while(opcao != 0){
		printf("Escolha uma opcao: \n 1: Enfileirar, 2: Desenfileirar, 0:Sair\n");
		scanf("%d",&opcao);
		if(opcao == 1){
			printf("Insira uma valor: ");
			scanf("%d", &valor);
			enfileirar(&f, valor);
		}else if(opcao == 2){
			printf("desenfileirar...");
			valor = desenfileirar(&f);
			if(valor != ERRO_FILA_VAZIA)
				printf("%d\n", valor);
		}
		printf("*****************************************\n");
		
	imprimir_fila(&f);
	}
	
	
	return 0;
}






















