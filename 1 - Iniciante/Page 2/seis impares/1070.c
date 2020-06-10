#include <stdio.h>
#include <stdlib.h>

/*/
@type: Function - int main()
@title: Seis Números Ímpares

@author: Rafael Lima Coelho
@since: 09-08-2019
@version: RLC.1.0.URI

@description: Leia um valor inteiro X. Em seguida apresente os 6 valores ímpares consecutivos a partir de X, um valor por linha, inclusive o X ser for o caso.
			 
@param: [nVal],    inteiro, Valor digitado pelo usuário.
@param: [nI],      inteiro, Contador do laço de repetição For.

@return: inteiro, A saída será uma sequência de seis números ímpares.
/*/

/*Inicio da Função*/
int main() {
	/*Declaração das variáveis*/
	int nI, nVal = 0;
	
	scanf("%d",&nVal);
	
	if((nVal % 2) == 0)
	{	
		nVal = nVal + 1;
	}
	
	for(nI = 0;nI <= 5; nI++)
	{		
		if((nVal % 2) != 0)
		{	
			printf("%d\n",nVal);
			nVal = nVal + 2;
		}
		else
		{
			printf("%d\n",nVal);
			nVal = nVal + 2;
		}			
	}
				
	/*Retorno da função para o fim do programa*/
	return 0;
}
