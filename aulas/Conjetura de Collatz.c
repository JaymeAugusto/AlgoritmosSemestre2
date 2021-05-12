#include<stdio.h>
typedef unsigned long long int llu;
void collatz(llu n){
	if(n==0) printf("Erro! n nao pode ser zero.\n");
	else if(n==1) printf("1\n");
	else if(n % 2 == 0){
		printf("%llu =>",n);
		collatz(n/2);
	}else{
		printf("%llu => ",n);
		collatz(3 * n + 1);
	}
}

int main(){
	int i;
	for(i=1;i<10;i++) collatz(i);
	return 0;
}
