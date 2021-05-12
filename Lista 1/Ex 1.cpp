#include<stdio.h>
int main(){
	//leia um inteiro, escrever sim se é par, e não caso contrario
	int num;
	scanf("%d",&num);
	if(num%2 == 0){
		printf("SIM");
	}else{
		printf("NAO");
	}
	
	return 0;
}
