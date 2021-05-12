#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Pilha{
	char dados[100];
	int tamanho;
};

void empilhar(struct Pilha *p,int letra ){
	p->dados[p->tamanho] = letra;
	p->tamanho++;
	
}

char desempilhar(struct Pilha *p){
	//printf("%c",p->dados[p->tamanho]);
	p->tamanho--;
	return p->dados[p->tamanho];	
}
int main(){
	struct Pilha p;
	char frase[100],volta;
	int i;
	fgets(frase,100,stdin);
	for(i=p.tamanho; i<strlen(frase); i++){
		if(frase[i] != ' '){
			empilhar(&p,frase[i]);
		}else{
			i = p.tamanho + 1;
			break;
		}
	}
	for(i=0; i<strlen(frase); i++){
		if(frase[i] != ' '){
			volta = desempilhar(&p);
			printf("%c",volta);
		}else{
			break;
		}
	}
	
	
	return 0;
}
