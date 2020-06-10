#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*/
@type: Function - int main()
@title: Sequencia logica 2

@author: Rafael Lima Coelho
@since: 20-10-2019
@version: RLC.1.0.URI

@description: Escreva um programa que leia dois valores X e Y. A seguir, mostre uma sequ�ncia de 1 at� Y, passando para a pr�xima linha a cada X n�meros.

@param: [x], inteiro, Numero de colunas.			 
@param: [y], inteiro, Numero de linhas.
@param: [i], inteiro, Numero a ser impresso e contador de linhas.
@param: [j], inteiro, Contador de colunas.

@return: inteiro, Cada sequ�ncia deve ser impressa em uma linha apenas, com 1 espa�o em branco entre cada n�mero, conforme exemplo. 
				  N�o deve haver espa�o em branco ap�s o �ltimo valor da linha.

/*/

/*Inicio da Fun��o*/
int main() {
	/*Declara��o das vari�veis*/
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
					
	/*Retorno da fun��o para o fim do programa*/
	return 0;
}
