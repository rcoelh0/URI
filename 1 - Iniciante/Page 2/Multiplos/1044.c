#include <stdio.h>
#include <stdlib.h>

/*/
@type: Function - int main()
@title: Múltiplos

@author: Rafael Lima Coelho
@since: 30-06-2019
@version: RLC.1.0.URI

@description: Leia 2 valores inteiros (A e B).
			  
@param: [nA], inteiro, Guarda a primeira variável digitada pelo usuário.
@param: [nB], inteiro, Guarda a segunda variável digitada pelo usuário.
@param: [nAux], inteiro, Guarda a variável que irá auxiliar na ordenação dos valores.

@return: caractere, Motrar uma mensagem "Sao Multiplos" ou "Nao sao Multiplos", indicando se os valores lidos são múltiplos entre si.
/*/

/*Inicio da Função*/
int main() {
	/*Declaração das variáveis*/
	int nA = 0, nB = 0, nAux = 0;
	
	/*Capturando valores digitados pelo usuário*/
	scanf("%d",&nA);
	scanf("%d",&nB);

	/*Ordenando de forma decrescente os números*/
	if(nA < nB)
	{
		nAux = nA;
		nA = nB;
		nB = nAux;
	}
	
	/*Verificando se os números são múltiplos (Foi utilizado a terceira propriedade dos números multiplos: "se os números x são múltiplos de y, então a divisão de x por y é exata.")*/
	if((nA % nB) == 0)
	{
		printf("Sao Multiplos\n");
	}
	else
	{
		printf("Nao sao Multiplos\n");
	}
	
	/*Retorno da função para o fim do programa*/
	return 0;
}
