#include <stdio.h>
#include <stdlib.h>

/*/
@type: Function - int main()
@title: Numeros Impares

@author: Rafael Lima Coelho
@since: 09-08-2019
@version: RLC.1.0.URI

@description: Leia um valor inteiro X (1 <= X <= 1000). Em seguida mostre os �mpares de 1 at� X, um valor por linha, inclusive o X, se for o caso.
			 
@param: [nVal],    inteiro, Valor digitado pelo usu�rio.
@param: [nI],      inteiro, Contador do la�o de repeti��o For.

@return: caractere, Imprima todos os valores �mpares de 1 at� X, inclusive X, se for o caso.
/*/

/*Inicio da Fun��o*/
int main() {
	/*Declara��o das vari�veis*/
	int nI, nVal = 0;
	
	scanf("%d",&nVal);
	
	for(nI = 0;nI <= nVal; nI++)
	{		
		if((nI % 2) != 0)
		{	
			printf("%d\n",nI);
		}			
	}
				
	/*Retorno da fun��o para o fim do programa*/
	return 0;
}
