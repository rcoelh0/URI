#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*/
@type: Function - int main()
@title: O Maior

@author: Rafael Lima Coelho
@since: 10-06-2019
@version: RLC.1.0.URI

@description: Programa que le três valores e apresenta o maior dos três valores lidos seguido da mensagem “eh o maior” 
@param: [nA], inteiro, Guarda o primeiro valor digitado pelo usuário.
@param: [nB], inteiro, Guarda o segundo valor digitado pelo usuário.
@param: [nC], inteiro, Guarda o terceiro valor digitado pelo usuário.
@param: [nMaior], inteiro, Guarda o maior dos três valores lidos.

@return: numerico, Apresenta o maior dos três valores lidos seguido da mensagem “eh o maior”.
/*/

/*Inicio da Função*/
int main() {
	/*Declaração das variaveis*/
	int nA = 0, nB = 0, nC = 0, nMaior = 0;
	
	/*Capturando valores digitados pelo usuário*/
	scanf("%d",&nA);
	scanf("%d",&nB);
	scanf("%d",&nC);
	
	/*Formula para encontrar o valor maior entre dois números*/	
	nMaior = (nA + nB + abs(nA - nB))/2;//a função abs([numero]) retorna o valor absoluto do número, ou seja, o modulo do número (|numero|). Ex: abs(-1) = 1
	
	if(nMaior > nC)
	{
		/*Mostrando na tela o valor maior*/	
		printf("%d eh o maior\n", nMaior);
	}
	else
	{
		nMaior = nC;
		/*Mostrando na tela o valor maior*/	
		printf("%d eh o maior\n", nMaior);	
	}
	
	/*Retorno da função para o fim do programa*/
	return 0;
}
