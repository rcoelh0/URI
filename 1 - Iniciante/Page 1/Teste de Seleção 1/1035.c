#include <stdio.h>
#include <stdlib.h>

/*/
@type: Function - int main()
@title: Teste de Sele��o 1

@author: Rafael Lima Coelho
@since: 28-06-2019
@version: RLC.1.0.URI

@description: Leia 4 valores inteiros A, B, C e D. A seguir, se B for maior do que C e se D for maior do que A, 
		      e a soma de C com D for maior que a soma de A e B e se C e D, ambos, forem positivos e se a vari�vel 
			  A for par escrever a mensagem "Valores aceitos", sen�o escrever "Valores nao aceitos".
@param: [nA], inteiro, Guarda o primeiro numero digitado pelo usu�rio.
@param: [nB], inteiro, Guarda o segundo numero digitado pelo usu�rio.
@param: [nC], inteiro, Guarda o terceiro numero digitado pelo usu�rio.
@param: [nD], inteiro, Guarda o quarto numero digitado pelo usu�rio.

@return: caractere, Mostre a respectiva mensagem ap�s a valida��o dos valores.

/*/

/*Inicio da Fun��o*/
int main() {
	/*Declara��o das variaveis*/
	int nA = 0, nB = 0, nC = 0, nD = 0;
	
	/*Capturando valores digitados pelo usu�rio*/
	scanf("%d",&nA);
	scanf("%d",&nB);
	scanf("%d",&nC);
	scanf("%d",&nD);
	
	/*Verificando se as condi��es do problema*/
	if(nB > nC && nD > nA && (nC + nD) > (nA + nB) && nC > 0 && nD > 0 && nA % 2 == 0)
	{
		/*Mostrando a mensagem na tela*/
		printf("Valores aceitos\n");	
	}
	else
	{
		/*Mostrando a mensagem na tela*/
		printf("Valores nao aceitos\n");	
	}	
		
	/*Retorno da fun��o para o fim do programa*/
	return 0;
}
