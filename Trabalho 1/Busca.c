#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
# define TOTAL 25000

int busca_linear(int V[], int n, int x)
{
    int i;
    for(i = 0; i < n; i++)
        if(V[i] == x)
            return i;
    return -1;
}

// Busca Binaria: devolve indice de x em V[esq..dir] (-1 se nao existir)
int busca_binaria(int V[], int esq, int dir, int x){
//    printf("Chamada recursiva busca_binaria(V, %d, %d, %d)\n", esq, dir, x);
//    printf("Conteudo de V[%d..%d]:", esq, dir);
    int i;
    for(i = esq; i <= dir; i++)
//        printf(" %d", V[i]);
//    printf("\n");

    if(dir < esq) return -1;
    int meio = (esq + dir) / 2;
    if(V[meio] == x) return meio; // encontrou x
    if(V[meio] < x)  // x maior que meio, vai para direita
        return busca_binaria(V, meio + 1, dir, x);
    else // x menor que meio, vai para esquerda
        return busca_binaria(V, esq, meio - 1, x);
}

// Busca Binaria iterativa: devolve indice de x em V[n] (-1 se nao existir)
int busca_binaria_iterativa(int V[], int n, int x)
{
    int meio, esq = 0, dir = n - 1;
    while(esq <= dir) {
        meio = (esq + dir) / 2;
        if(V[meio] == x) return meio; // encontrou x
        if(V[meio] < x)  // x maior que meio, vai para direita
            esq = meio + 1;
        else // x menor que meio, vai para esquerda
            dir = meio - 1;
    }
    return -1;
}

int main()
{
    int V[TOTAL];
    int n = sizeof(V)/sizeof(V[0]);
    int x;
    float linear,binaria,binariainterativa;
    time_t start,end;
	for(x=0; x<n; x++) V[x] = x;
//    for(x = 0; x < 10; x++) {
//        printf("Buscando %d...\n", x);
//        printf("Posicao (busca linear) %d: %d\n", x, busca_linear(V, n, x));
//        printf("Posicao (busca binaria iterativa) %d: %d\n", x,
//            busca_binaria_iterativa(V, n, x));
//        printf("Posicao (busca binaria) %d: %d\n", x,
//            busca_binaria(V, 0, n-1, x));
//        printf("\n");
//    }
	start = time(NULL);
	for(x=0; x<n; x++)	printf("Posicao (busca linear) %d: %d   |", x, busca_linear(V, n, x));
	end = time(NULL);
	linear = difftime(end,start);
	
	start = time(NULL);
	for(x=0; x<n; x++)	printf("Posicao (busca binaria iterativa) %d: %d   |", x, busca_binaria_iterativa(V, n, x));
	end = time(NULL);
	binariainterativa = difftime(end,start);
	
	start = time(NULL);
	for(x=0; x<n; x++)	printf("Posicao (busca binaria) %d: %d   |", x, busca_binaria(V, 0, n-1, x));
	end = time(NULL);
	binaria = difftime(end,start);
	system("cls");
	printf("\n\n\n");
	printf("\t           LINEAR : | %f | seg \n", linear);
	printf("\tBINARIAINTERATIVA : | %f | seg \n", binariainterativa);
	printf("\t          BINARIA : | %f | seg \n", binaria);
    return 0;
}
