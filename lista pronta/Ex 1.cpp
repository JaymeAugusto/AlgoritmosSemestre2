#include<stdio.h>
int main(){
	//leia um inteiro, escrever sim se � par, e n�o caso contrario
	int num;
	scanf("%d",&num);
	if(num%2 == 0){
		printf("SIM");
	}else{
		printf("NAO");
	}
	
	return 0;
}
