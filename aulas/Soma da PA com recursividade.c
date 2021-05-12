#include<stdio.h>

int soma(int valor_atual, int r, int n, int i){
	if(i == n) return 0;
	return valor_atual + soma(valor_atual+r,r,n,i+1);
}

int main(){
	int n,r,a;
	printf("Insira n: ");
	scanf("%d",&n);
	printf("Insira o primeiro valor: ");
	scanf("%d",&a);
	printf("Insira r: ");
	scanf("%d",&r);
	printf("A soma eh %d.\n",soma(a,r,n,0));
	return 0;
}
