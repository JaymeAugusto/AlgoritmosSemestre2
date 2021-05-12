//Jayme Augusto | GRR 20195529 | Curso de Licenciatura em Computacao | 2º periodo
#include<stdio.h>
int main(){
	int i,x,y;
	printf("digite o dividendo\n");
	scanf("%d",&x);
	printf("digite o divisor\n");
	scanf("%d",&y);
	for(i=0; x>=0; i++){
		x-=y;
	}
	printf("O resto da divisao e %d\n",x);
	
	return 0;
	
}
