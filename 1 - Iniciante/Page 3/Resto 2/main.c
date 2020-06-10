#include <stdio.h>
#include <stdlib.h>

/*/
@type: Function - int main()
@title: Resto 2

@author: Rafael Lima Coelho
@since: 16-10-2019
@version: RLC.1.0.URI

@description: Leia um valor inteiro N. Apresente todos os n�meros entre 1 e 10000 que divididos por N d�o resto igual a 2.
			 
@param: [nN], inteiro, Numero de entrada.
@param: [nCont], inteiro, Contador.

@return: inteiro, Imprima todos valores que quando divididos por N d�o resto = 2, um por linha.
/*/

/*Inicio da Fun��o*/
int main() {
	/*Declara��o das vari�veis*/
	int nN = 0, nCont = 0;

	scanf("%d",&nN);
	
	if(nN < 10000)
	{
		for(nCont = 1;nCont <= 10000; nCont++)
		{
			if((nCont % nN) == 2)
			{
				printf("%d\n",nCont);	
			}	
		}
	}	
		
	/*Retorno da fun��o para o fim do programa*/
	return 0;
}
