#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*/
@type: Function - int main()
@title: Multiplos de 13

@author: Rafael Lima Coelho
@since: 20-10-2019
@version: RLC.1.0.URI

@description: Escreva um algoritmo que leia 2 valores inteiros X e Y calcule a soma dos números que não são múltiplos de 13 entre X e Y, incluindo ambos.
			  O arquivo de entrada contém 2 valores inteiros quaisquer, não necessariamente em ordem crescente.

@param: [num1], inteiro, Primeiro numero de entrada.			 
@param: [num2], inteiro, Segundo numero de entrada.
@param: [somDiv], inteiro, Soma dos numeros que nao sao multiplos de 13.
@param: [i] , inteiro, Contador do laco de repeticao.

@return: caractere, Imprima a soma de todos os valores não divisíveis por 13 entre os dois valores lidos na entrada, inclusive ambos se for o caso.

/*/

/*Inicio da Função*/
int main() {
	/*Declaração das variáveis*/
	int num1 = 0, num2 =0, somDiv = 0, i;
	
	scanf("%d %d",&num1,&num2);
	
	if(num1 > num2)
	{
		for(i = num2; i <= num1; i++)
		{
			if(i % 13 != 0)
			{
				somDiv += i;
			}
		}
		printf("%d\n", somDiv);
	}
	else if(num1 < num2)
	{
		for(i = num1; i <= num2; i++)
		{
			if(i % 13 != 0)
			{
				somDiv += i;
			}
		}
		printf("%d\n", somDiv);
	}
	else
	{
		if(num1 % 13 != 0)
		{
			printf("%d\n", num1);
		}
	}
			
	/*Retorno da função para o fim do programa*/
	return 0;
}
