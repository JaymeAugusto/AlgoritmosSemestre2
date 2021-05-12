#include<stdio.h>

void pa (int a, int r, int n){
	int i;
	printf("[%d]  ", a);
	a += r;
	n--;
	if(n!=0) pa(a,r,n);
}

int main(){
	int n, a, r, i, j;
	printf("Digite quantas vezes deseja fazer a progressao: ");
	scanf("%d",&n);
	printf("\n Digite o primeiro numero da progressao: ");
	scanf("%d",&a);
	printf("\n Digite a razao da progressao: ");
	scanf("%d",&r);
	pa(a,r,n);
	
}
