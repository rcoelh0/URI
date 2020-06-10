#include <stdio.h>
#include <stdlib.h>

/*/
@type: Function - int main()
@title: Numeros Impares

@author: Rafael Lima Coelho
@since: 09-08-2019
@version: RLC.1.0.URI

@description: Leia um valor inteiro X (1 <= X <= 1000). Em seguida mostre os ímpares de 1 até X, um valor por linha, inclusive o X, se for o caso.
			 
@param: [nVal],    inteiro, Valor digitado pelo usuário.
@param: [nI],      inteiro, Contador do laço de repetição For.

@return: caractere, Imprima todos os valores ímpares de 1 até X, inclusive X, se for o caso.
/*/

/*Inicio da Função*/
int main() {
	/*Declaração das variáveis*/
	int nI, nVal = 0;
	
	scanf("%d",&nVal);
	
	for(nI = 0;nI <= nVal; nI++)
	{		
		if((nI % 2) != 0)
		{	
			printf("%d\n",nI);
		}			
	}
				
	/*Retorno da função para o fim do programa*/
	return 0;
}
