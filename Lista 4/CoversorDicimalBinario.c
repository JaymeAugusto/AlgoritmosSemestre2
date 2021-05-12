#include<stdio.h>
#include<string.h>
void conversao(int deci){
	if(deci%2 == 0){
		printf("0");
		deci/=2;
	}else{
		printf("1");
		deci/=2;
	}
	if(deci!=0) conversao(deci);
}
int main(){
	int deci;
	printf("Digite um numero decimal: ");
	scanf("%d",&deci);
	conversao(deci);
	return 0;
	
	
}
