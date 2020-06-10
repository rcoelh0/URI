#include <stdio.h>
#include <stdlib.h>

/*/
@type: Function - int main()
@title: M�s

@author: Rafael Lima Coelho
@since: 01-07-2019
@version: RLC.1.0.URI

@description: Fa�a um programa que leia 6 valores. Estes valores ser�o somente negativos ou positivos (desconsidere os valores nulos). 
	          A seguir, mostre a quantidade de valores positivos digitados.
			 
@param: [nI], inteiro, Contador do la�o de repeti��o FOR().
@param: [nConta], inteiro, Contador dos numeros positivos.
@param: [nNum], double, Valor digitado pelo usu�rio.

@return: caractere, Imprima uma mensagem dizendo quantos valores positivos foram lidos.
/*/

/*Inicio da Fun��o*/
int main() {
	/*Declara��o das vari�veis*/
	int nI = 0, nConta = 0;
	double nNum = 0.0;
	
	for(nI = 1;nI <= 6; nI++)
	{
		scanf("%lf",&nNum);
		
		if(nNum > 0)
		{
			nConta++;
		}			
	}
	
	printf("%d valores positivos\n",nConta);	
		
	/*Retorno da fun��o para o fim do programa*/
	return 0;
}
