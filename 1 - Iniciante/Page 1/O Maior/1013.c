#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*/
@type: Function - int main()
@title: O Maior

@author: Rafael Lima Coelho
@since: 10-06-2019
@version: RLC.1.0.URI

@description: Programa que le tr�s valores e apresenta o maior dos tr�s valores lidos seguido da mensagem �eh o maior� 
@param: [nA], inteiro, Guarda o primeiro valor digitado pelo usu�rio.
@param: [nB], inteiro, Guarda o segundo valor digitado pelo usu�rio.
@param: [nC], inteiro, Guarda o terceiro valor digitado pelo usu�rio.
@param: [nMaior], inteiro, Guarda o maior dos tr�s valores lidos.

@return: numerico, Apresenta o maior dos tr�s valores lidos seguido da mensagem �eh o maior�.
/*/

/*Inicio da Fun��o*/
int main() {
	/*Declara��o das variaveis*/
	int nA = 0, nB = 0, nC = 0, nMaior = 0;
	
	/*Capturando valores digitados pelo usu�rio*/
	scanf("%d",&nA);
	scanf("%d",&nB);
	scanf("%d",&nC);
	
	/*Formula para encontrar o valor maior entre dois n�meros*/	
	nMaior = (nA + nB + abs(nA - nB))/2;//a fun��o abs([numero]) retorna o valor absoluto do n�mero, ou seja, o modulo do n�mero (|numero|). Ex: abs(-1) = 1
	
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
	
	/*Retorno da fun��o para o fim do programa*/
	return 0;
}
