#include<stdio.h>

int busca_linear(int V[], int n, int x){
	int i;
	for(i=0; i<n;i++) if(V[i] == x) return i;
	return -1;
}

int main(){
	int V[] = {2,10,-2,3,4};
	int n = 5, x;
	for(x=0;x<=10;x++) printf("Posicao do valor %d: %d\n",x,busca_linear(V,n,x));
	return 0;
}
