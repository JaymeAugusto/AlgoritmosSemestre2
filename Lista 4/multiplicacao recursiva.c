#include<stdio.h>
int mult(int x, int n, int i){
	i += n;
	x--;
	if(x!=0) mult(x,n,i);
	else return i;
}
int main(){
	int i = 0, x, n,res;
	scanf("%d%d",&x,&n);
	res = mult(x,n,i);
	printf("Resultado = %d",res);
}
