#include <stdio.h>
#include <stdlib.h>

/*/
@type: Function - int main()
@title: Soma de Impares Consecutivos I

@author: Rafael Lima Coelho
@since: 09-08-2019
@version: RLC.1.0.URI

@description: Leia 2 valores inteiros X e Y. A seguir, calcule e mostre a soma dos n�meros impares entre eles.
			 
@param: [nA],    inteiro, Valor digitado pelo usu�rio.
@param: [nB],    inteiro, Valor digitado pelo usu�rio.
@param: [nSoma], inteiro, Soma dos valores impares entre o nA e nB.
@param: [nI],    inteiro, Contador do la�o de repeti��o For.

@return: inteiro, O programa deve imprimir um valor inteiro. Este valor � a soma dos valores �mpares que est�o entre os valores fornecidos na entrada que dever� caber em um inteiro.
/*/

/*Inicio da Fun��o*/
int main() {
	/*Declara��o das vari�veis*/
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
				
	/*Retorno da fun��o para o fim do programa*/
	return 0;
}
