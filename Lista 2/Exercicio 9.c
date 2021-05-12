//Jayme Augusto | GRR 20195529 | Curso de Licenciatura em Computacao | 2º periodo
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define capacidade 100
struct Pilha{
	char dados[capacidade];
	int tamanho;
};

void empilhar(struct Pilha *p,int letra ){
	p->dados[p->tamanho] = letra;
	p->tamanho++;
}

char desempilhar(struct Pilha *p){
	p->tamanho--;
	return p->dados[p->tamanho];	
}
int main(){
	struct Pilha p;
	p.tamanho = 0;
	char frase[capacidade],volta;
	int i, n=0;
	fgets(frase,capacidade,stdin);
	for(i=0; i<strlen(frase); i++)	empilhar(&p,frase[i]);
	for(i=0; i<strlen(frase); i++){
			volta = desempilhar(&p);
			printf("%c",volta);
	}
	return 0;
}
