//Jayme Augusto | GRR 20195529 | Curso de Licenciatura em Computacao | 2º periodo
#include<stdio.h>
int main(){
	int primo=0,n,i;
	printf("Digite um numero\n");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		if(n%i ==0){
			primo++;
		}
	}
	if(primo == 2){
		printf("SIM\n");
	}else{
		printf("NAO\n");
	}
	
	return 0;
}
