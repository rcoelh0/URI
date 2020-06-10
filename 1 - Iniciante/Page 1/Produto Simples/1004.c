#include <stdio.h>
#include <stdlib.h>

/*/
@type: Function - int main()
@title: Produto Simples

@author: Rafael Lima Coelho
@since: 10-06-2019
@version: RLC.1.0.URI

@description: Este programa realiza a multiplica��o de dois n�meros inteiros e imprime na tela o resultado.
@param: [A], inteiro, Guarda o primeiro numero digitado pelo usu�rio.
@param: [B], inteiro, Guarda o segundo numero digitado pelo usu�rio.
@param: [PROD], inteiro, Guarda a multiplica��o das vari�veis A * B.

@return: num�rico, A multiplica��o de dois inteiros.

/*/

/*Inicio da Fun��o*/
int main() {
	/*Declara��o das vari�veis*/
	int A = 0, B = 0, PROD = 0;
	
	/*Capturando valores digitados pelo usu�rio*/
	scanf("%d",&A);
	scanf("%d",&B);
	
	/*Calculando o valo de PROD*/	
	PROD = A * B;
	
	/*Mostrando na tela o valor de PROD*/
	printf("PROD = %d\n", PROD);
	
	/*Retorno da fun��o para o fim do programa*/
	return 0;
}
