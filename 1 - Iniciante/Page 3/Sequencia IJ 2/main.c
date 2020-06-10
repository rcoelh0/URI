#include <stdio.h>
#include <stdlib.h>

/*/
@type: Function - int main()
@title: Sequencia IJ 2

@author: Rafael Lima Coelho
@since: 16-10-2019
@version: RLC.1.0.URI

@description: Você deve fazer um programa que apresente a sequencia conforme o exemplo.
			 
@param: [I], inteiro, Contador crescente.

@return: caractere, Imprima a sequencia conforme exemplo abaixo.
/*/

/*Inicio da Função*/
int main() {
	/*Declaração das variáveis*/
	int I;
			
	for(I = 1;I <= 9; I+=2)
	{
		printf("I=%d J=7\n",I);		
		printf("I=%d J=6\n",I);
		printf("I=%d J=5\n",I);	
	}	
	
	/*Retorno da função para o fim do programa*/
	return 0;
}
