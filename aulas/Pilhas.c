#include<stdio.h>

#define CAPACIDADE 10
#define ERRO_PILHA_VAZIA -1
typedef int TPilha;  //renomear tipo

struct pilha{
	TPilha dados[CAPACIDADE];
	int tamanho;
	
};

void empilhar(struct pilha *p, TPilha valor){
	if(p-> tamanho == CAPACIDADE){
		printf("Erro: pilha cheia!!\n");	
	} 
	else{
		p->dados[p->tamanho] = valor;
		p-> tamanho++;
	}
}

TPilha desempilhar(struct pilha *p){
	if(p->tamanho == 0){
		printf("Erro: pilha vazia!\n");
		return ERRO_PILHA_VAZIA;
	}else{
		p->tamanho--;
		return p->dados[p->tamanho];
	}
}
int main(){
	struct pilha p;
	int q;
	
	printf("%d", &q);
		
	p.tamanho = 0;
	int valor;
	printf("Inserindo 2...\n");
	empilhar(&p, 2);
	printf("Inserindo 3...\n");
	empilhar(&p, 3);
	printf("Inserindo 0...\n");
	empilhar(&p, 0);
	printf("Desempilhar...\n");
	valor = desempilhar(&p);
	
	if(valor != ERRO_PILHA_VAZIA){
		printf("%d\n",valor);
	}
	printf("Desempilhar...");
	valor = desempilhar(&p);
	
	if(valor != ERRO_PILHA_VAZIA){
		printf("%d\n",valor);
	}
	printf("Inserindo 7...");
	empilhar(&p,7);
	
	if(valor != ERRO_PILHA_VAZIA){
		printf("%d\n",valor);
	}
	printf("Desempilhar...");
	valor = desempilhar(&p);
	
	if(valor != ERRO_PILHA_VAZIA){
		printf("%d\n",valor);
	}
	printf("Desempilhar...");
	valor = desempilhar(&p);
	
	if(valor != ERRO_PILHA_VAZIA){
		printf("%d\n",valor);
	}
	printf("Desempilhar...");
	valor = desempilhar(&p);
	
	if(valor != ERRO_PILHA_VAZIA){
		printf("%d\n",valor);
	}
	printf("Desempilhar...");
	valor = desempilhar(&p);
	return 0;
}
