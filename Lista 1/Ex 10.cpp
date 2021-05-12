//Jayme Augusto | GRR 20195529 | Curso de Licenciatura em Computacao | 2º periodo
#include<stdio.h>
int main(){
	int matrix[3][3], i, j;
	
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			scanf("%d",&matrix[i][j]);
		}
	}
	
	for(i=0; i<3; i++){
		printf("\n");
		for(j=0; j<3; j++){
			printf("[%d] ",matrix[i][j]);
		}
	}
	printf("\n\n\n\n");
	for(j=0; j<3; j++){
		printf("\n");
		for(i=0; i<3; i++){
			printf("[%d] ",matrix[i][j]);
		}
	}
	
	
	return 0;
}
