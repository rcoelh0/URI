#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*/
@type: Function - int main()
@title: Sequencia logica 2

@author: Rafael Lima Coelho
@since: 20-10-2019
@version: RLC.1.0.URI

@description: Escreva um programa que leia dois valores X e Y. A seguir, mostre uma sequência de 1 até Y, passando para a próxima linha a cada X números.

@param: [x], inteiro, Numero de colunas.			 
@param: [y], inteiro, Numero de linhas.
@param: [i], inteiro, Numero a ser impresso e contador de linhas.
@param: [j], inteiro, Contador de colunas.

@return: inteiro, Cada sequência deve ser impressa em uma linha apenas, com 1 espaço em branco entre cada número, conforme exemplo. 
				  Não deve haver espaço em branco após o último valor da linha.

/*/

/*Inicio da Função*/
int main() {
	/*Declaração das variáveis*/
	int x = 0, y = 0, i = 0, j = 0;
	
	scanf("%d %d",&x,&y);
	
	while(i < y)
	{
		for(j = 1;j <= x;j++)
		{
			i++;
			if(j == x)
			{
				printf("%d",i);							
			}
			else
			{
				printf("%d ",i);							
			}
		}
		printf("\n");							
	}
					
	/*Retorno da função para o fim do programa*/
	return 0;
}
