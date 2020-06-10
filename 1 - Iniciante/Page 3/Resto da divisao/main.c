#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*/
@type: Function - int main()
@title: Resto da divisao

@author: Rafael Lima Coelho
@since: 20-10-2019
@version: RLC.1.0.URI

@description: Escreva um programa que leia 2 valores X e Y e que imprima todos os valores entre eles cujo resto da divisão dele por 5 for igual a 2 ou igual a 3.

@param: [num1], inteiro, Primeiro numero de entrada.			 
@param: [num2], inteiro, Segundo numero de entrada.
@param: [i] , inteiro, Contador do laco de repeticao.

@return: caractere, Imprima todos os valores conforme exemplo, sempre em ordem crescente.

/*/

/*Inicio da Função*/
int main() {
	/*Declaração das variáveis*/
	int num1 = 0, num2 = 0, i;
	
	scanf("%d %d",&num1,&num2);
	
	if(num1 > num2)
	{
		for(i = (num2 + 1); i < num1; i++)
		{
			if(i % 5 == 2 || i % 5 == 3)
			{
				printf("%d\n", i);
			}
		}
	}
	else if(num1 < num2)
	{
		for(i = (num1 + 1); i < num2; i++)
		{
			if(i % 5 == 2 || i % 5 == 3)
			{
				printf("%d\n", i);
			}
		}	
	}
			
	/*Retorno da função para o fim do programa*/
	return 0;
}
