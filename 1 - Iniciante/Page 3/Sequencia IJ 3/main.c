#include <stdio.h>
#include <stdlib.h>

/*/
@type: Function - int main()
@title: Sequencia IJ 3

@author: Rafael Lima Coelho
@since: 16-10-2019
@version: RLC.1.0.URI

@description: Você deve fazer um programa que apresente a sequencia conforme o exemplo.
			 
@param: [I], inteiro, Contador crescente repetitivo.
@param: [J], inteiro, Contador crescente.

@return: caractere, Imprima a sequencia conforme exemplo abaixo.
/*/

/*Inicio da Função*/
int main() {
	/*Declaração das variáveis*/
	int I, J = 3;
			
	for(I = 1;I <= 9; I+=2)
	{
		printf("I=%d J=%d\n",I,J+4);		
		printf("I=%d J=%d\n",I,J+3);
		printf("I=%d J=%d\n",I,J+2);
		J+= 2;	
	}	
	
	/*Retorno da função para o fim do programa*/
	return 0;
}
