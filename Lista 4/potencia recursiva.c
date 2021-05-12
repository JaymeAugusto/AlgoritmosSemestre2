#include<stdio.h>
float pos(float x, int n, float i){
	i *= x;
	n--;
	if(n!=0) pos(x,n,i);
	else return i;
}
int main(){
	float x,res;
	int n,i=1;
	scanf("%f%d",&x,&n);
	res = pos(x,n,i);
	printf("Resultado = %f",res);
}

