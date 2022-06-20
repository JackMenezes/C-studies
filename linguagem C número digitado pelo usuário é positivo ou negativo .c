#include <stdlib.h>
#include <stdio.h>

int main ()
{
	float numero;
	printf("Digito um numero:\n");
	scanf("%f", &numero);
	if (numero > 0)
	{
		printf("Numero e Positivo!\n");
	}
	else
	{
		if (numero < 0)
		{
			printf("Numero e Negativo!\n");
		}
		else
		{
			printf("Numero nao e positivo nem negativo!\n");
		}
	}

}
