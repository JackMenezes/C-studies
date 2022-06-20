/*Elabore um programa que receba o salario de um funcionario e o codigo do cargo 
e apresente o cargo, o valor do aumento e o novo salario.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int codigo;
	float salario_atual, novo_salario, valor_aumento;
	
    // Entrada de Dados
	printf("1- Servente \n 2- Pedreiro \n 3- Mestre de Obras \n 4- Tecnico de Seguranca\n\n");	
	
	// Cálculo do Aumento de Salário
	printf("Digite o codigo do cargo: ");
	scanf("%d", &codigo);
	printf("Digite o salario atual: R$ ");
	scanf("%f", &salario_atual);
	
	if(codigo == 1)
	{
		valor_aumento = salario_atual * 40;
		printf("Valor do Aumento e: %.2f\n", valor_aumento);
    }
    else
	{
	    if(codigo == 2)
	    {
		valor_aumento = salario_atual * 35;
		printf("Valor do Aumento e: %.2f\n", valor_aumento);
        }
		else
		{
			if(codigo == 3)
			{
		      valor_aumento = salario_atual * 20;
		      printf("Valor do Aumento e: %.2f\n", valor_aumento);
		    }
			  else
			    {
			  	if(codigo == 4)
			  	{
		           valor_aumento = salario_atual * 10;
		           printf("Valor do Aumento e: %.2f\n", valor_aumento);
			    }
			    else
			    {
			    	printf("\nCODIGO INVALIDO!\n");
				}
            }
	    }
    }
	
	novo_salario = valor_aumento + salario_atual;
	
	// Exibição dos Resultados
	printf("\nSALARIO ATUAL ......: R$ %10.2f\n", salario_atual);
	printf("\VALOR DO AUMENTO ...: R$ %10.2f\n", valor_aumento);
	printf("NOVO SALARIO .......: R$ %10.2f\n", novo_salario);
	
	return(0);		
}

