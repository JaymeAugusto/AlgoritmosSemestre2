#include<stdio.h>

typedef unsigned long long int llu;

unsigned long long int fat(unsigned long long int n){
	if(n==0) return 1;
	else return n* fat(n-1);
}

llu fib(llu n){
	if(n<=1) return n;
	else return fib(n-1) + fib(n-2);
}

int main(){
	unsigned long long int i;
	for(i=0;i<20;i++) printf("%llu! = %llu\n",i,fat(i));
	printf("Sequencia de fibonacci:\n");
	for(i=0;i<40;i++) printf("fib(%llu)= | %llu | \n",i, fib(i));
	printf("\n");
	return 0;
}
