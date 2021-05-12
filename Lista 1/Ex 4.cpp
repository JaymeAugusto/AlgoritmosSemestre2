//Jayme Augusto | GRR 20195529 | Curso de Licenciatura em Computacao | 2º periodo
#include<stdio.h>
int main(){
	int x, y, aux;
	scanf("%d%d", &x, &y);
	aux = x;
	x = y;
	y = aux;
	printf("Inverteu\n");
	printf("\t x = %d\n",x);
	printf("\t y = %d\n", y);
	
	return 0;
}
