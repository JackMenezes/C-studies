#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, quociente = 0, resto = 0;
    
	printf("Digite o Dividendo:\n\n");
    scanf("%d",&num1);
    
    printf("\nDigite o Divisor:\n\n");
    scanf("%d",&num2);
    
	quociente = num1 / num2;
	resto = num1 % num2;
	
	printf("\nResultado\n");
	
	printf("\nO Valor do Quociente e: %d\n", quociente);
	printf("E o Valor do Resto e: %d\n", resto);
    
    return 0;
}