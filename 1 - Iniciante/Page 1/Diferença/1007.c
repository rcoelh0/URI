#include <stdio.h>
#include <stdlib.h>

/*/
@type: Function - int main()
@title: Diferen�a

@author: Rafael Lima Coelho
@since: 10-06-2019
@version: RLC.1.0.URI

@description: Este programa realiza a diferen�a de dois produtos, com numeros inteiros, e imprime na tela o resultado.
@param: [nA], inteiro, Guarda o primeiro numero digitado pelo usu�rio.
@param: [nB], inteiro, Guarda o segundo numero digitado pelo usu�rio.
@param: [nC], inteiro, Guarda o terceiro numero digitado pelo usu�rio.
@param: [nD], inteiro, Guarda o quarto numero digitado pelo usu�rio.
@param: [nDif], inteiro, Guarda a soma das vari�veis (A * B) - (C * D).

@return: numerico, A diferen�a de dois produtos.

/*/

/*Inicio da Fun��o*/
int main() {
	/*Declara��o das variaveis*/
	int nA = 0, nB = 0, nC = 0, nD = 0, nDif = 0;
	
	/*Capturando valores digitados pelo usu�rio*/
	scanf("%d",&nA);
	scanf("%d",&nB);
	scanf("%d",&nC);
	scanf("%d",&nD);
	
	/*Calculando o valor da diferen�a*/	
	nDif = (nA * nB) - (nC * nD);
	
	/*Mostrando na tela o valor da diferen�a*/
	printf("DIFERENCA = %d\n", nDif);
	
	/*Retorno da fun��o para o fim do programa*/
	return 0;
}
