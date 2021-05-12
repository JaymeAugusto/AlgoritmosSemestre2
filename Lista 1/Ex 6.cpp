//Jayme Augusto | GRR 20195529 | Curso de Licenciatura em Computacao | 2º periodo
#include<stdio.h>
	bool inv = false;
void invalido(int ano, int mes, int dia){
	if(ano>2014 || mes>12 || dia>31){
		printf("Valores incompativeis");
		inv = true;
	}
}
int main(){
	int dia, mes, ano, idade;
	scanf("%d%d%d",&dia, &mes, &ano);
	invalido(ano,mes,dia);
	if(ano<= 2014 && inv == false){
		if(mes<=8){
			if(dia<15){
				idade = 2013-ano;
			}else if(dia == 15 && mes == 8){
				printf("\t #*@$ PARABENS !@!#\n");
				idade = 2014 - ano;
			}	
		}else{
			idade = 2014 - ano;
		}
		printf("%d anos\n", idade);	
	}
	
	return 0;
}
