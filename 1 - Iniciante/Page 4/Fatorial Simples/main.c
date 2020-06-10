#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*/
@type: Function - int main()
@title: Fatorial Simples

@author: Rafael Lima Coelho
@since: 20-10-2019
@version: RLC.1.0.URI

@description: Ler um valor N. Calcular e escrever seu respectivo fatorial. Fatorial de N = N * (N-1) * (N-2) * (N-3) * ... * 1.
			  A entrada contém um valor inteiro N (0 < N < 13).

@param: [iNum], inteiro, Valor a ser fatorado e resultado da fatoração.
@param: [iCont], inteiro, Contador que é decrementado apartir de iNum.

@return: inteiro, A saída contém um valor inteiro, correspondente ao fatorial de N.

/*/

/*Inicio da Função*/
int main() {
	/*Declaração das variáveis*/
	int iNum = 0, iCont;
	
	scanf("%d",&iNum);
			
	for(iCont = iNum - 1; iCont > 0; iCont--)
	{
		iNum *= iCont;		
	}
	
	printf("%d\n",iNum);
						
	/*Retorno da função para o fim do programa*/
	return 0;
}
