#include <stdio.h>
#include <stdlib.h>

int main(){
	
	char nome [30];
	char sobre_nome [15];
	char sexo [10];
	char endereco [30];
	
	printf("Digite o nome:\n");
	scanf("%s", &nome);
	
	printf("Digite o Sobre Nome:\n");
	scanf("%s", sobre_nome);
	
	printf("Digite o Endereco:\n");
	scanf("%s", &endereco);
		
	printf("Digite o Sexo:\n");
	scanf("%s", &sexo);
	
	printf("\n%s", nome);
	printf("\n%s", sobre_nome);
	printf("\n%s", sexo);
	printf("\n%s", endereco);
	
}