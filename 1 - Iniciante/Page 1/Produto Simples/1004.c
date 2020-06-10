#include <stdio.h>
#include <stdlib.h>

/*/
@type: Function - int main()
@title: Produto Simples

@author: Rafael Lima Coelho
@since: 10-06-2019
@version: RLC.1.0.URI

@description: Este programa realiza a multiplicação de dois números inteiros e imprime na tela o resultado.
@param: [A], inteiro, Guarda o primeiro numero digitado pelo usuário.
@param: [B], inteiro, Guarda o segundo numero digitado pelo usuário.
@param: [PROD], inteiro, Guarda a multiplicação das variáveis A * B.

@return: numérico, A multiplicação de dois inteiros.

/*/

/*Inicio da Função*/
int main() {
	/*Declaração das variáveis*/
	int A = 0, B = 0, PROD = 0;
	
	/*Capturando valores digitados pelo usuário*/
	scanf("%d",&A);
	scanf("%d",&B);
	
	/*Calculando o valo de PROD*/	
	PROD = A * B;
	
	/*Mostrando na tela o valor de PROD*/
	printf("PROD = %d\n", PROD);
	
	/*Retorno da função para o fim do programa*/
	return 0;
}
