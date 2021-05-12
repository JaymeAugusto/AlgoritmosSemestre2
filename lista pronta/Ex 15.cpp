//Jayme Augusto | GRR 20195529 | Curso de Licenciatura em Computacao | 2º periodo
#include<stdio.h>
int main(){
	int i,x,y,teste,certo=0;
	printf("digite o dividendo\n");
	scanf("%d",&x);
	printf("digite o divisor\n");
	scanf("%d",&y);
	for(i=0; i<=x; i++){
		teste = i*y;
		if(teste == x){
			certo = i;
		}
	}
	if(certo!=0){
		printf("Divisao: %d\n",certo);	
	}else{
		printf("Divisao nao exata!!!\a");
	}
	
}
