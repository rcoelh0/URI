#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*/
@type: Function - int main()
@title: Numero Primo

@author: Rafael Lima Coelho
@since: 23-10-2019
@version: RLC.1.0.URI

@description: Na matemática, um Número Primo é aquele que pode ser dividido somente por 1 (um) e por ele mesmo. 
			  Por exemplo, o número 7 é primo, pois pode ser dividido apenas pelo número 1 e pelo número 7.

@param: [i], inteiro, Contador laço externo.			 
@param: [j], inteiro, Indicador se o numero é divisivel por outro numero que nao seja 1 ou ele mesmo.
@param: [t], inteiro, Quantidade de testes.
@param: [num], inteiro, Numero a ser testado.


@return: caractere, Para cada caso de teste de entrada, imprima a mensagem “X eh primo” ou “X nao eh primo”, de acordo com a especificação fornecida.

/*/


/*Inicio da Função*/
int main() {
	/*Declaração das variáveis*/
	int i, num, t, j = 1;
	
	scanf("%d",&t);
	
	//Laço para repetição de acordo com o numero digitado pelo usuário				
	for(i = 0; i < t; i++)
	{
		scanf("%d",&num);
				
		while(j < num - 1)
		{
			j++;
			if(num % j == 0)
			{	
				j = num;	
			}
		}
		if( j != num)
		{
			printf("%d eh primo\n",num);	
		}
		else
		{
			printf("%d nao eh primo\n",num);	
		}
		
		j = 1;
	}
							
	/*Retorno da função para o fim do programa*/
	return 0;
}
