#include <stdio.h>
#include <stdlib.h>

/*/
@type: Function - int main()
@title: Soma de Impares Consecutivos I

@author: Rafael Lima Coelho
@since: 09-08-2019
@version: RLC.1.0.URI

@description: Leia 2 valores inteiros X e Y. A seguir, calcule e mostre a soma dos números impares entre eles.
			 
@param: [nA],    inteiro, Valor digitado pelo usuário.
@param: [nB],    inteiro, Valor digitado pelo usuário.
@param: [nSoma], inteiro, Soma dos valores impares entre o nA e nB.
@param: [nI],    inteiro, Contador do laço de repetição For.

@return: inteiro, O programa deve imprimir um valor inteiro. Este valor é a soma dos valores ímpares que estão entre os valores fornecidos na entrada que deverá caber em um inteiro.
/*/

/*Inicio da Função*/
int main() {
	/*Declaração das variáveis*/
	int nI, nA = 0, nB = 0, nSoma = 0;
	
	scanf("%d",&nA);
	scanf("%d",&nB);
	
	if(nA > nB)
	{
		nI = nA;
		nA = nB;
		nB = nI;
		nI = 0;
	}
	
	for(nI = (nA + 1);nI < nB; nI++)
	{		
		if((nI % 2) != 0)
		{	
			nSoma = nSoma + nI;
		}
			
	}
	
	printf("%d\n",nSoma);
				
	/*Retorno da função para o fim do programa*/
	return 0;
}
