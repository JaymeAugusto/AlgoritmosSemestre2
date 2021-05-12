#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include <windows.h> 
#include <sys/time.h>
#define MAX 300 //250000
long getMicrotime(){
	struct timeval currentTime;
	gettimeofday(&currentTime, NULL);
	return currentTime.tv_sec * (int)1e6 + currentTime.tv_usec;
}
	
int busca_linear(int V[], int n, int x,long long int lldini, int *V_dados, float *V_tempos){
    int i;
 	long long int lldfin;
 	double Time;
    clock_t tIni, tFin; 
   
    tIni = clock();
 	for(i = 
	 0; i < n; i++){
        printf("\t\t\t\t|%d|**|%d|",V[i],i);
		if(V[i] == x){
        tFin = clock();
        lldfin = getMicrotime();
        Time = ((double)(lldfin-lldini)/1000);
        printf("\nTempo|%lf| n Elmentos Examindos|%d| para n Elementos do vetor |%d|\n",Time, i, x );
		V_dados[x] = i;
		V_tempos[x]= Time;
        return i; 	
		}
	}
	lldini =  getMicrotime();
	printf("\nTempo|%lf|n Elmentos Examindos|%d| para n Elementos do vetor |%d|\n",((double)(lldfin-lldini)/1000), i, x );
	return -1;
}

// Busca Binaria: devolve indice de x em V[esq..dir] (-1 se nao existir)
int busca_binaria(int V[], int esq, int dir, int x, long long int lldini){
	clock_t tIni, tFin;
 	long long int lldfin; 

    tIni = clock();
    //printf("Chamada recursiva busca_binaria(V, %d, %d, %d)\n", esq, dir, x);
    //printf("Conteudo de V[%d..%d]:", esq, dir);
    int i;
//    for(i = esq; i <= dir; i++)
//        printf(" %d", V[i]);
//    printf("\n");

    if(dir < esq) {
    	tFin = clock();
    	lldfin = getMicrotime();
        printf("\n\tTempo|%lf| n Elmentos Examindos|%d| para n Elementos do vetor |%d|\n",((double)(lldfin-lldini)/1000), i, x );
		return -1;
	}
	int meio = (esq + dir) / 2;
    if(V[meio] == x){
    	tFin = clock();
    	lldfin = getMicrotime();
		printf("\n\t\tTempo|%lf| n Elmentos Examindos|%d| para n Elementos do vetor |%d|\n\n",((double)(lldfin-lldini)/1000), i, x );
		return meio; // encontrou x
	}
	if(V[meio] < x)  // x maior que meio, vai para direita
        
		return busca_binaria(V, meio + 1, dir, x, lldini);
    else // x menor que meio, vai para esquerda
        return busca_binaria(V, esq, meio - 1, x,lldini);
}

// Busca Binaria iterativa: devolve indice de x em V[n] (-1 se nao existir)
int busca_binaria_iterativa(int V[], int n, int x, long long int lldini ){	
    clock_t tIni, tFin; 
    long long int lldfin;
	int meio, esq = 0, dir = n - 1, i;
    
	tIni = clock();
	while(esq <= dir) {
		i++;
        meio = (esq + dir) / 2;
        //printf("|%d|**|%d| ", esq,dir);
		if(V[meio] == x){
        	
      		tFin =clock();
    		lldfin = getMicrotime();
			printf("\n\t Tempo|%lf| n Elmentos Examindos|%d| para n Elementos do vetor |%d|\n\n",((double)(lldfin-lldini)/1000), i, x );
			return meio; // encontrou x
		}
		if(V[meio] < x)  // x maior que meio, vai para direita
            esq = meio + 1;
        else // x menor que meio, vai para esquerda
            dir = meio - 1;
    }

    tFin = clock();
    lldfin = getMicrotime();
    printf("\n\t Tempo|%lf| n Elmentos Examindos|%d| para n Elementos do vetor |%d|\n\n",((double)(lldfin-lldini)/1000), i, x );
    return -1;
}

int main()
{	
	
	int  List_Elenment_linear[MAX];
    int V[MAX], V_dados_Linear[MAX], V_dados_Bublle[MAX], V_dados_BublleI[MAX];
    float V_tempos_Linear[MAX], V_tempos_Bublle[MAX], V_tempos_BublleI[MAX];
    int n = sizeof(V)/sizeof(V[0]);
    int x,j,i;
    time_t tIn, tFn, tDel, tLin, tBub, tBubInt;
    
	for (j=1; j<MAX; j++){
    	V[j] = j;
    	printf("%d||", V[j]);
	}
	tIn = time(NULL);
    for(x = 0; x <= MAX; x++) {
    	printf("Buscando %d...\n", x);
		printf("Posicao (busca linear) %d: %d\n\n\n", x, busca_linear(V, n, x,getMicrotime(), &V_dados_Linear, &V_tempos_Linear));
        printf("\n");
    }tFn = time(NULL);
     tDel = tFn-tIn;
     tLin = tDel;
     
	tIn = time(NULL);
    for(x = 0; x <= MAX; x++) {
	    printf("Buscando %d...\n", x);
		printf("Posicao (busca binaria iterativa) %d: %d\n\n\n\n", x, busca_binaria_iterativa(V, n, x,getMicrotime()));
        printf("\n");
    }tFn = time(NULL);
     tDel = tFn-tIn;
     tBubInt = tDel;
     
     
	tIn = time(NULL);
    for(x = 0; x <= MAX; x++) {
	   printf("Buscando %d...\n", x);
	   printf("Posicao (busca binaria) %d: %d\n\n\n\n", x, busca_binaria(V, 0, n-1, x,getMicrotime()));
    }tFn = time(NULL);
     tDel = tFn-tIn;
     tBub = tDel;
 
    printf("Linear     |TIME|%ld|sec||\n", tLin);
    printf("Bublle     |TIME|%ld|sec|\n",tBub);
    printf("Bublle Int |TIME|%ld|sec|\n",tBubInt);
    
   	for (j=1; j<MAX; j++){
    	printf("|%d|| \t ||%f|\n", V_dados_Linear[j], V_tempos_Linear[j]);
	}
}
