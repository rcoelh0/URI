#include <stdio.h>
#include <stdlib.h>

/*/
@type: Function - int main()
@title: Soma Simples

@author: Rafael Lima Coelho
@since: 10-06-2019
@version: RLC.1.0.URI

@description: Este programa realiza a soma de dois numeros inteiros e imprime na tela o resultado.
@param: [A], inteiro, Guarda o primeiro numero digitado pelo usu�rio.
@param: [A], inteiro, Guarda o segundo numero digitado pelo usu�rio.
@param: [SOMA], inteiro, Guarda a soma das vari�veis A + B.

@return: numerico, A soma de dois inteiros.

/*/

/*Inicio da Fun��o*/
int main() {
	/*Declara��o das variaveis*/
	int A = 0, B = 0, SOMA = 0;
	
	/*Capturando valores digitados pelo usu�rio*/
	scanf("%d",&A);
	scanf("%d",&B);
	
	/*Calculando o valo de SOMA*/	
	SOMA = A + B;
	
	/*Mostrando na tela o valor de SOMA*/
	printf("SOMA = %d\n", SOMA);
	
	/*Retorno da fun��o para o fim do programa*/
	return 0;
}
