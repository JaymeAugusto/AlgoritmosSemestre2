//Jayme Augusto | GRR 20195529 | Curso de Licenciatura em Computacao | 2º periodo
#include<stdio.h>
#include<stdlib.h>
struct inverter{
	int x, y;
};
int main(){
	struct inverter *I = malloc(sizeof(struct inverter));
	int aux;
	printf("Digite um numero X e um numero Y:\n");
	scanf("%d%d",&I->x, &I->y); 
	system("cls");
	printf("X: %d Y: %d\n",I->x,I->y);
	
	aux = I->x;
	I->x = I->y;
	I->y = aux;
	
	printf("X: %d Y: %d\n",I->x,I->y);
	
	free(I);
	return 0;
}
