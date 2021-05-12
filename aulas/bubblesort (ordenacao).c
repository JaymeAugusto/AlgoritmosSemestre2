#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#define MAX 40000
//insercão
void ordenacaoInsercao(int V[], int n){
	int i,j,aux;
	for(i=1;i<n;i++){
		aux = V[i];
		j = i-1;
		while (j>=0 && V[j]>aux){
			V[j+1] = V[j];
			j--;
		}
		V[j+1] = aux;
	}
}

//Ordena V em ordem nao-decrescente com bubblesort
void bubblesort(int V[], int n){
	int i,j,aux,trocou;
	for(j=n-1; j>0; j--){
		trocou = 0;
		for(i=0; i<j; i++){
			if(V[i] > V[i+1]){
				aux = V[i];
				V[i] = V[i+1];
				V[i+1] = aux;
				trocou = 1;
			}
		}
		if(!trocou) break;
	}
}
//Ordena V em ordem nao-decrescente com ordenacao por selecao
void selecao(int V[], int n){
	int i,j,aux,menor;
	for(i=0; i<=n-2; i++){
		menor = i;
		for(j = i+1; j<n; j++)
			if(V[j] < V[menor])
				menor = j;
		aux = V[i];
		V[i] = V[menor];
		V[menor] = aux;
	}
}
//mergesort 
void intercala (int V[], int inicio, int meio, int fim, int W[]){
	int k=inicio, i=inicio, j=meio;
	while(i < meio && j < fim)
		if(V[i] < V[j]) W[k++] = V[i++];
		else W[k++] = V[j++];
	while(i < meio)
		W[k++] = V[i++];
	while(j < fim)
		W[k++] = V[j++];
	for(k = inicio; k<fim; k++) V[k] = W[k];
}

void mergesort_recursao(int V[], int inicio, int fim, int W[]){
	int i;
	printf("V[%d..%d] = ",inicio, fim);
	for(i = inicio; i<fim; i++)
		printf("%d ", V[i]);
	printf("\n");
	if(fim - 1 > inicio){
		int meio = (inicio + fim + 1) / 2;
		mergesort_recursao(V, inicio, meio, W);
		mergesort_recursao(V, meio, fim, W);
		intercala(V, inicio, meio, fim, W);
	}
	printf("V[%d..%d] =",inicio, fim);
	for(i = inicio;i<fim;i++)
		printf("%d ", V[i]);
	printf("\n");
}

void mergesort (int V[], int n){
	int *W = malloc(sizeof(int)*n);
	mergesort_recursao(V,0,n,W);
	free(W);
}

int particao(int V[], int esq, int dir){
	int pivo = V[dir], j = esq, k, aux;
	//printf("particionar [%d..%d]=",esq,dir);
	for(k = esq; k <= dir; k++)
		//printf("%d ",V[k]);
	//printf("\n");
	for(k = esq; k < dir; k++)
		if(V[k] <= pivo){
			aux = V[j];
			V[j] = V[k];
			V[k] = aux;
			j++;
		}
	aux = V[j];
	V[j] = V[dir];
	V[dir] = aux;
	//printf("Particionando[%d..%d]=",esq,dir);
//	for(k = esq; k <= dir; k++){
//		if(k==j) //printf("<%d> ",V[k]);
//		else //printf("%d ",V[k]);
//	}
	//printf("\n\n");
	return j;
}

void quicksort_recursao(int V[], int esq, int dir){
	if(esq < dir){
		
		int j = particao(V, esq, dir);
		quicksort_recursao(V, esq, j-1);
		quicksort_recursao(V, j+1,dir);
	}
}

void quicksort(int V[], int n){
	quicksort_recursao(V, 0, n-1);
}

int main(){
	int Vaux[MAX];
	int i,n = MAX;
	srand(time(NULL));
	for(i=0; i<n; i++) Vaux[i] = rand() % (2*n);
	for(i=0; i<n; i++) Vaux[i] = i;
	int V[sizeof(Vaux)/sizeof(Vaux[0])];
	memcpy(V,Vaux,sizeof(Vaux));
	bubblesort(V,n);
	for(i=0; i<n; i++) printf("| %d | ", V[i]);
	printf("\n---------------------------------------------------\n");
	memcpy(V,Vaux,sizeof(Vaux));
	selecao(V,n);
	for(i=0; i<n; i++) printf("| %d | ", V[i]);
	printf("\n---------------------------------------------------\n");
	memcpy(V,Vaux,sizeof(Vaux));
	ordenacaoInsercao(V,n);
	for(i=0; i<n; i++) printf("| %d | ", V[i]);
	printf("\n---------------------------------------------------\n");
	memcpy(V,Vaux,sizeof(Vaux));
	mergesort(V,n);
	for(i=0; i<n; i++) printf("| %d | ", V[i]);
	printf("\n---------------------------------------------------\n");
	memcpy(V,Vaux,sizeof(Vaux));
	quicksort(V,n);
	for(i=0; i<n; i++) printf("| %d | ", V[i]);
	printf("\n---------------------------------------------------\n");
	return 0;
}
