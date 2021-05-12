#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<string.h>
void fim(){
	printf("Sua tentativa falhou !");
	system("exit");
}
void hacker(){
	printf("0100101 0100101 0100101 0100101 0100101 0100101 0100101 0100101 0100101 0100101 0100101 0100101 0100101 0100101 01001011\n");
	printf("0100010 0100101 0100101 1010101 0111001 0100001 1111001 1111111 0000001 0000110 1110010 1111100 0000000 0101110 00101010\n");
	Sleep(50);
}
int main(){
	int pin,senha;
	char rede[1],usuario[20], senhausu[20];
	printf("-----------------------------------------------------------------------------------------------------------------------\n\n");
	printf("\t\t\tISSO NAO E UM JOGO!\n\n");
	printf("\tVOCE NAO TEM MUITO TEMPO PARA FAZER ISSO ENTAO FACA RAPIDO!\n\n");
	printf("-----------------------------------------------------------------------------------------------------------------------\n\n");
	printf("\t\tTENTE OU FALHE MISERAVELMENTE!\n\n");
	printf("-----------------------------------------------------------------------------------------------------------------------\n");
	system("pause");
	system("cls");
	printf("\t AMEACA NO SISTEMA...\n\n");
	printf("  insira pin para continuar a entrada:\n");
	scanf("%d",&pin);
	system("cls");
	int i;
	for(i =0;i<3;i++){
		printf("conectando.");
		Sleep(500);
		system("cls");
		printf("conectando..");
		Sleep(500);
		system("cls");
		printf("conectando...");
		Sleep(500);
		system("cls");
	}
	if(pin == 19226801){
		printf("Acessando o sistema...\n\n");
		Sleep(800);
		for(i=0;i<70;i++){
			hacker();
		}
		for(i =0;i<2;i++){
			system("cls");
			printf("decodificando indereco de ip.");
			Sleep(500);
			system("cls");
			printf("decodificando indereco de ip..");
			Sleep(500);
			system("cls");
			printf("decodificando indereco de ip...");
			Sleep(500);
			system("cls");
			}
		Sleep(1000);
		system("cls");
		for(i=0;i<90;i++){
			hacker();
		}
		system("cls");
		printf("\n\nInsira a senha para acessar o sistema Microsoft\n");
		scanf("%d",&senha);
		if(senha == 20195529){
			for(i =0;i<4;i++){
			system("cls");
			printf("Tentando conectar no sistema.");
			Sleep(500);
			system("cls");
			printf("Tentando conectar no sistema..");
			Sleep(500);
			system("cls");
			printf("Tentando conectar no sistema...");
			Sleep(500);
			system("cls");
			}
			printf("Digite a senha de subrede para desbloquear a maquina:\n");
			scanf("%s",&rede);
			if(strcmp(rede,"emyaj")==0){
				for(i=0;i<110;i++){
					hacker();
				}
				printf("Sistema Desbloqueado.\n");
				printf("Digite o usuario: ");
				scanf("%s",&usuario);
				printf("Digite a senha: ");
				scanf("%s",&senhausu);
				if(strcmp(usuario, "jayme")==0 && strcmp(senhausu,"10265375924")==0){
					printf("Sistema conectado.\n");
					printf("preparando para instalar o malware\n");
					Sleep(3000);
					system("cls");
					for(i=5;i>0;i--){
						printf("\n\tSistema sendo Desinstalado em : %d",i);
						Sleep(1000);
						system("cls");
					}
					for(i=0;i<200;i++){
						hacker();
					}
				}else{
					fim();
				}
			}else{
				fim();
			}	
		}else{
			fim();
		}	
	}else{
		fim();
	}
	return 0;
}
