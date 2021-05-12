//Jayme Augusto | GRR 20195529 | Curso de Licenciatura em Computacao | 2º periodo
#include<stdio.h>
void menor(int a,int b){
	if(a<b){
		printf("%d",a);
	}else{
		printf("%d",b);
	}
}

int main(){
	int x,z;
	scanf("%d%d", &x, &z);
	menor(x,z);
	return 0; 
}
