#include<stdio.h>
#include<string.h>
#include<windows.h>
int verifica(char num[],int n,int cont,int verdade){
	if((num[cont-1] - '0') == n) verdade++;
	cont--;
	if(cont!=0) verifica(num,n,cont,verdade);
	else return verdade;
}
int main(){
	char num[100];
	int n,cont;
	printf("Digite um numero K: ");
	scanf("%s",&num);
	printf("digite um num para verificar: ");
	scanf("%d",&n);
	cont = strlen(num);
	printf("\n\n  Saida = %d\n",verifica(num,n,cont,0));
	return 0;
}
