//Jayme Augusto | GRR 20195529 | Curso de Licenciatura em Computacao | 2º periodo
#include<stdio.h>
#include<stdlib.h>

struct hora {
	int hora, minuto, segundo;
	 
};
int main(){
	int n,i;
	int maior[3], menor[3];
	printf("Leia um vetor inteiro n (maximo 10)\n");
	scanf("%d",&n);
	struct hora vetor[n];
	for(i=0; i<n; i++){
		printf("Digite a hora: ");
		scanf("%d",&vetor[i].hora);
		printf("Digite o minuto: ");
		scanf("%d",&vetor[i].minuto);
		printf("Digite o segundo: ");
		scanf("%d",&vetor[i].segundo);
	}
	
	for(i=0; i<n; i++){
		
		if(i==0){
			maior[0] = vetor[i].hora;
			maior[1] = vetor[i].minuto;
			maior[2] = vetor[i].segundo;
		}else{
			if(maior[0] < vetor[i].hora){
				maior[0] = vetor[i].hora;
				maior[1] = vetor[i].minuto;
				maior[2] = vetor[i].segundo;
			}else if(maior[0] == vetor[i].hora){
				if(maior[1] < vetor[i].minuto){
					maior[1] = vetor[i].minuto;
					maior[2] = vetor[i].segundo;
				}else if(maior[1] == vetor[i].minuto){
					if(maior[2] < vetor[i].segundo){
						maior[2] = vetor[i].segundo;
					}
				}
			}
		}
	}
	for(i=0; i<n; i++){
		
		if(i==0){
			menor[0] = vetor[i].hora;
			menor[1] = vetor[i].minuto;
			menor[2] = vetor[i].segundo;
		}else{
			if(menor[0] > vetor[i].hora){
				menor[0] = vetor[i].hora;
				menor[1] = vetor[i].minuto;
				menor[2] = vetor[i].segundo;
			}else if(menor[0] == vetor[i].hora){
					if(menor[1] > vetor[i].minuto){
						menor[1] = vetor[i].minuto;
						menor[2] = vetor[i].segundo;
					}else if(menor[1] == vetor[i].minuto){
						if(menor[2] > vetor[i].segundo){
							menor[2] = vetor[i].segundo;
					}
				}
			}
		}
	}
	system("cls");
	printf("----------------------------------------------\n");
	printf("\t MAIOR VALOR\n");
	printf("\t%d : %d : %d\n",maior[0], maior[1], maior[2]);
	printf("----------------------------------------------\n");
	printf("----------------------------------------------\n");
	printf("\t MENOR VALOR\n");
	printf("\t%d : %d : %d\n",menor[0], menor[1], menor[2]);
	printf("----------------------------------------------\n");
	return 0;

}
