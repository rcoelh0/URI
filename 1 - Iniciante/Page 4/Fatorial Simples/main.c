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
			  A entrada cont�m um valor inteiro N (0 < N < 13).

@param: [iNum], inteiro, Valor a ser fatorado e resultado da fatora��o.
@param: [iCont], inteiro, Contador que � decrementado apartir de iNum.

@return: inteiro, A sa�da cont�m um valor inteiro, correspondente ao fatorial de N.

/*/

/*Inicio da Fun��o*/
int main() {
	/*Declara��o das vari�veis*/
	int iNum = 0, iCont;
	
	scanf("%d",&iNum);
			
	for(iCont = iNum - 1; iCont > 0; iCont--)
	{
		iNum *= iCont;		
	}
	
	printf("%d\n",iNum);
						
	/*Retorno da fun��o para o fim do programa*/
	return 0;
}
