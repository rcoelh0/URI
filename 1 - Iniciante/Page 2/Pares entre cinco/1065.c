#include <stdio.h>
#include <stdlib.h>

/*/
@type: Function - int main()
@title: Pares entre cinco numeros

@author: Rafael Lima Coelho
@since: 09-08-2019
@version: RLC.1.0.URI

@description: Fa�a um programa que leia 5 valores inteiros. Conte quantos destes valores digitados s�o pares e mostre esta informa��o.
			 
@param: [nVal], inteiro, Valor digitado pelo usu�rio.
@param: [nPar], inteiro, Quantidade de valores pares.
@param: [nI], inteiro, Contador do la�o de repeti��o For.

@return: caractere, Imprima a mensagem conforme o exemplo fornecido, indicando a quantidade de valores pares lidos.
/*/

/*Inicio da Fun��o*/
int main() {
	/*Declara��o das vari�veis*/
	int nPar = 0, nI, nVal = 0;
	
	for(nI = 1;nI <= 5; nI++)
	{
		scanf("%d",&nVal);
		
		if((nVal % 2) == 0)
		{	
			nPar++;
		}			
	}
		
	printf("%d valores pares\n",nPar);	
		
	/*Retorno da fun��o para o fim do programa*/
	return 0;
}
