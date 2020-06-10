#include <stdio.h>
#include <stdlib.h>

/*/
@type: Function - int main()
@title: Mês

@author: Rafael Lima Coelho
@since: 01-07-2019
@version: RLC.1.0.URI

@description: Faça um programa que mostre os números pares entre 1 e 100, inclusive.
			 
@param: [nCont], inteiro, Contador do laço de repetição FOR().

@return: numerico, Imprima todos os números pares entre 1 e 100, inclusive se for o caso, um em cada linha.
/*/

/*Inicio da Função*/
int main() {
	/*Declaração das variáveis*/
	int nCont = 0;
	
	for(nCont = 2;nCont <=100; nCont += 2)
	{
		printf("%d\n",nCont);			
	}
		
	/*Retorno da função para o fim do programa*/
	return 0;
}
