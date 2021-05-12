//Jayme Augusto | grr:20195529

// **SELO DE QUALIDADE NO MEU COMPUTADOR NÃO FUNCIONA**

#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<string.h>
#define MAX 100000 // 10000 | 1000


//Ordenacao Insercao
void ordenacao_Insercao(int V[], int n){
	int i,j,aux;
	for(i=1;i<n;i++){
		aux = V[i];
		j = i-1;
		while(j>=0 && V[j]>aux){
			V[j+1] = V[j];
			j--;
		}
		V[j+1] = aux;
	}
}


//Bubblesort
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


//Selecao
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


//MergeSort
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
	if(fim - 1 > inicio){
		int meio = (inicio + fim + 1) / 2;
		mergesort_recursao(V, inicio, meio, W);
		mergesort_recursao(V, meio, fim, W);
		intercala(V, inicio, meio, fim, W);
	}
}

void mergesort (int V[], int n){
	int *W = malloc(sizeof(int)*n);
	mergesort_recursao(V,0,n,W);
	free(W);
}


//QuickSort
int particao(int V[], int esq, int dir){
	int pivo = V[dir], j = esq, k, aux;
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


//QuickSort Aleatorio
void quicksort_recursao_Ale(int V[], int esq, int dir){
	int ale,aux;
	if(esq < dir){
		ale = esq + rand () % ((dir-esq)+1);
		aux = V[ale];
		V[ale] = V[dir];
		V[dir] = aux;
		int j = particao(V, esq, dir);
		quicksort_recursao_Ale(V, esq, j-1);
		quicksort_recursao_Ale(V, j+1,dir);
	}
}
	
void quicksort_Ale(int V[], int n){
	quicksort_recursao_Ale(V, 0, n-1);
}

int main(){
	double t_Ordenacao, t_Bubblesort, t_Selecao, t_MergeSort, t_QuickSort, t_QuickSortale;
	int Vaux[MAX];
	int c,i,n = MAX;
	clock_t t1,t2;
	srand(time(NULL));
	for(c=0;c<3;c++){
		if(c == 0) for(i=0; i<n; i++) Vaux[i] = rand() % (32767);
		if(c == 1) for(i=0; i<n; i++) Vaux[i] = i;
		if(c == 2) for(i=n-1; i>=0; i--) Vaux[i] = n-i;
		int V[sizeof(Vaux)/sizeof(Vaux[0])];
		
		memcpy(V,Vaux,sizeof(Vaux));
		t1 = clock();
		ordenacao_Insercao(V,n);
		t2 = clock();
		t_Ordenacao = (double)(t2-t1)/CLOCKS_PER_SEC;
		
		memcpy(V,Vaux,sizeof(Vaux));
		t1 = clock();
		bubblesort(V,n);
		t2 = clock();
		t_Bubblesort = (double)(t2-t1)/CLOCKS_PER_SEC;
		
		memcpy(V,Vaux,sizeof(Vaux));
		t1 = clock();
		selecao(V,n);
		t2 = clock();
		t_Selecao = (double)(t2-t1)/CLOCKS_PER_SEC;
		
		memcpy(V,Vaux,sizeof(Vaux));
		t1 = clock();
		mergesort(V,n);
		t2 = clock();
		t_MergeSort = (double)(t2-t1)/CLOCKS_PER_SEC;
		
		memcpy(V,Vaux,sizeof(Vaux));
		t1 = clock();
		quicksort(V,n);
		t2 = clock();
		t_QuickSort = (double)(t2-t1)/CLOCKS_PER_SEC;
		
		memcpy(V,Vaux,sizeof(Vaux));
		t1 = clock();
		quicksort_Ale(V,n);
		t2 = clock();
		t_QuickSortale = (double)(t2-t1)/CLOCKS_PER_SEC;
		
		if(c == 0) printf("\n\n\t-------------- Randomico ----------------\n");
		if(c == 1) printf("\n\n\t-------------- Crescente ----------------\n");
		if(c == 2) printf("\n\n\t------------- Decrescente ---------------\n");
		printf("\t|       Insercao        | tempo: %6.3lfs |\n",t_Ordenacao);
		printf("\t|       Bubblesort      | tempo: %6.3lfs |\n",t_Bubblesort);
		printf("\t|        Selecao        | tempo: %6.3lfs |\n",t_Selecao);
		printf("\t|       MergeSort       | tempo: %6.3lfs |\n",t_MergeSort);
		printf("\t|       QuickSort       | tempo: %6.3lfs |\n",t_QuickSort);
		printf("\t|  QuickSort Aleatoria  | tempo: %6.3lfs |\n",t_QuickSortale);
		printf("\t-----------------------------------------\n");
	}
}
