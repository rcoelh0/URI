#include <stdio.h>
#include <stdlib.h>

/*/
@type: Function - int main()
@title: Extremamente B�sico

@author: Rafael Lima Coelho
@since: 10-06-2019
@version: RLC.1.0.URI

@description: Este programa realiza a soma de dois numeros inteiros e imprime na tela o resultado.
@param: [nA], inteiro, Guarda o primeiro numero digitado pelo usu�rio.
@param: [nB], inteiro, Guarda o segundo numero digitado pelo usu�rio.
@param: [nX], inteiro, Guarda a soma das vari�veis nA + nB.

@return: numerico, A soma de dois inteiros.

/*/

/*Inicio da Fun��o*/
int main() {
	/*Declara��o das variaveis*/
	int nA = 0, nB = 0, nX = 0;
	
	/*Capturando valores digitados pelo usu�rio*/
	scanf("%d",&nA);
	scanf("%d",&nB);
	
	/*Calculando o valo de nX*/	
	nX = nA + nB;
	
	/*Mostrando na tela o valor de nX*/
	printf("X = %d\n", nX);
	
	/*Retorno da fun��o para o fim do programa*/
	return 0;
}
