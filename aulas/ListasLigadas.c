#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>

typedef int Tlista;

struct ItemLista{
	Tlista valor;
	struct ItemLista *proximo;	
};

// insere item no inicio da lista e devolve ponteiro para novo inicio
struct ItemLista *inserir_inicio_lista(struct ItemLista * inicio, Tlista valor){
	struct ItemLista *novo = malloc(sizeof(struct ItemLista));
	novo->valor = valor;
	novo->proximo = inicio;
	return novo;
}

struct ItemLista *inserir_final_lista(struct ItemLista * inicio, Tlista valor){
	struct ItemLista *novo = malloc(sizeof(struct ItemLista));
	novo->valor = valor;
	novo->proximo = NULL;
	if(inicio == NULL) inicio = novo;
	else{
		struct ItemLista *atual;
		for(atual = inicio; atual != NULL; atual = atual->proximo)
			if(atual->proximo == NULL){
				atual->proximo = novo;
				break;
			}
	}
	return inicio;
}

void imprimir_lista(struct ItemLista *inicio){
	struct ItemLista *atual;
	for(atual = inicio; atual != NULL; atual = atual->proximo){
		printf("%d | ",atual->valor);
	}
	printf("\n");
}

//remove primeiro item da lista
struct ItemLista *remover_lista_incio(struct ItemLista *inicio){
	if(inicio== NULL) return NULL;
	struct ItemLista *aux = inicio->proximo;
	free(inicio);
	return aux;
}

void apagar_lista (struct ItemLista *inicio){
	while(inicio != NULL)	inicio = remover_lista_incio(inicio);
}

int main(){
	struct ItemLista *inicio = NULL;
	inicio = inserir_inicio_lista(inicio, 3);
	inicio = inserir_inicio_lista(inicio, 5);
	inicio = inserir_inicio_lista(inicio, 2);
	inicio = remover_lista_incio(inicio);
	imprimir_lista(inicio);
	Sleep(1000);
	inicio = inserir_final_lista(inicio, 10);
	inicio = inserir_final_lista(inicio, 11);
	inicio = inserir_final_lista(inicio, 12);
	inicio = remover_lista_incio(inicio);
	imprimir_lista(inicio);
	Sleep(1000);
	apagar_lista(inicio);
//	imprimir_lista(inicio);
	system("cls");

	
	
	return 0;
}
