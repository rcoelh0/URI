#include <stdio.h>
#include <stdlib.h>

/*/
@type: Function - int main()
@title: Seis N�meros �mpares

@author: Rafael Lima Coelho
@since: 09-08-2019
@version: RLC.1.0.URI

@description: Leia um valor inteiro X. Em seguida apresente os 6 valores �mpares consecutivos a partir de X, um valor por linha, inclusive o X ser for o caso.
			 
@param: [nVal],    inteiro, Valor digitado pelo usu�rio.
@param: [nI],      inteiro, Contador do la�o de repeti��o For.

@return: inteiro, A sa�da ser� uma sequ�ncia de seis n�meros �mpares.
/*/

/*Inicio da Fun��o*/
int main() {
	/*Declara��o das vari�veis*/
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
				
	/*Retorno da fun��o para o fim do programa*/
	return 0;
}
