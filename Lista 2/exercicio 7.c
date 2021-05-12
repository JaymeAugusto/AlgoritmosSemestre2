//Jayme Augusto | GRR 20195529 | Curso de Licenciatura em Computacao | 2º periodo
#include<stdio.h>
#include<stdlib.h>
struct Data{
	int dia, mes,  ano;
};
struct Hora{
	int hora, minuto, segundo;
};
struct Pessoa{
	char nome[30];
	struct Data nascimento;
	struct Hora horario;
};

int main(){
	struct Pessoa *p = malloc(sizeof(struct Pessoa));
	printf("--------------------------------\n");
	printf("\tCADASTRO DE NACIMENTO\n");
	printf("--------------------------------\n");
	printf("Digite seu primeiro nome: ");
	fgets(p->nome,30,stdin);
	printf("Digite o dia do seu nascimento: ");
	scanf("%d",&p->nascimento.dia);
	printf("Digite o mes do seu nascimento: ");
	scanf("%d",&p->nascimento.mes);
	printf("Digite o ano do seu nascimento: ");
	scanf("%d",&p->nascimento.ano);
	printf("Digite o hora do seu nascimento: ");
	scanf("%d",&p->horario.hora);
	printf("Digite o minuto do seu nascimento: ");
	scanf("%d",&p->horario.minuto);
	printf("Digite o segundo do seu nascimento: ");
	scanf("%d",&p->horario.segundo);

	system("cls");
	
	printf("\n\nAluno: %s",p->nome);
	printf("Nascimento: %d/%d/%d as %d:%d:%d horas", p->nascimento.dia, p->nascimento.mes, p->nascimento.ano, p->horario.hora, p->horario.minuto, p->horario.segundo);
	
	free(p);
	
	return 0;
}
