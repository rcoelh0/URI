#include <stdio.h>
#include <stdlib.h>

/*/
@type: Function - int main()
@title: M�s

@author: Rafael Lima Coelho
@since: 01-07-2019
@version: RLC.1.0.URI

@description: Fa�a um programa que mostre os n�meros pares entre 1 e 100, inclusive.
			 
@param: [nCont], inteiro, Contador do la�o de repeti��o FOR().

@return: numerico, Imprima todos os n�meros pares entre 1 e 100, inclusive se for o caso, um em cada linha.
/*/

/*Inicio da Fun��o*/
int main() {
	/*Declara��o das vari�veis*/
	int nCont = 0;
	
	for(nCont = 2;nCont <=100; nCont += 2)
	{
		printf("%d\n",nCont);			
	}
		
	/*Retorno da fun��o para o fim do programa*/
	return 0;
}
