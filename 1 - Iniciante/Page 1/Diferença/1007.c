#include <stdio.h>
#include <stdlib.h>

/*/
@type: Function - int main()
@title: Diferença

@author: Rafael Lima Coelho
@since: 10-06-2019
@version: RLC.1.0.URI

@description: Este programa realiza a diferença de dois produtos, com numeros inteiros, e imprime na tela o resultado.
@param: [nA], inteiro, Guarda o primeiro numero digitado pelo usuário.
@param: [nB], inteiro, Guarda o segundo numero digitado pelo usuário.
@param: [nC], inteiro, Guarda o terceiro numero digitado pelo usuário.
@param: [nD], inteiro, Guarda o quarto numero digitado pelo usuário.
@param: [nDif], inteiro, Guarda a soma das variáveis (A * B) - (C * D).

@return: numerico, A diferença de dois produtos.

/*/

/*Inicio da Função*/
int main() {
	/*Declaração das variaveis*/
	int nA = 0, nB = 0, nC = 0, nD = 0, nDif = 0;
	
	/*Capturando valores digitados pelo usuário*/
	scanf("%d",&nA);
	scanf("%d",&nB);
	scanf("%d",&nC);
	scanf("%d",&nD);
	
	/*Calculando o valor da diferença*/	
	nDif = (nA * nB) - (nC * nD);
	
	/*Mostrando na tela o valor da diferença*/
	printf("DIFERENCA = %d\n", nDif);
	
	/*Retorno da função para o fim do programa*/
	return 0;
}
