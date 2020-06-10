#include <stdio.h>
#include <stdlib.h>

/*/
@type: Function - int main()
@title: M�ltiplos

@author: Rafael Lima Coelho
@since: 30-06-2019
@version: RLC.1.0.URI

@description: Leia 2 valores inteiros (A e B).
			  
@param: [nA], inteiro, Guarda a primeira vari�vel digitada pelo usu�rio.
@param: [nB], inteiro, Guarda a segunda vari�vel digitada pelo usu�rio.
@param: [nAux], inteiro, Guarda a vari�vel que ir� auxiliar na ordena��o dos valores.

@return: caractere, Motrar uma mensagem "Sao Multiplos" ou "Nao sao Multiplos", indicando se os valores lidos s�o m�ltiplos entre si.
/*/

/*Inicio da Fun��o*/
int main() {
	/*Declara��o das vari�veis*/
	int nA = 0, nB = 0, nAux = 0;
	
	/*Capturando valores digitados pelo usu�rio*/
	scanf("%d",&nA);
	scanf("%d",&nB);

	/*Ordenando de forma decrescente os n�meros*/
	if(nA < nB)
	{
		nAux = nA;
		nA = nB;
		nB = nAux;
	}
	
	/*Verificando se os n�meros s�o m�ltiplos (Foi utilizado a terceira propriedade dos n�meros multiplos: "se os n�meros x s�o m�ltiplos de y, ent�o a divis�o de x por y � exata.")*/
	if((nA % nB) == 0)
	{
		printf("Sao Multiplos\n");
	}
	else
	{
		printf("Nao sao Multiplos\n");
	}
	
	/*Retorno da fun��o para o fim do programa*/
	return 0;
}
