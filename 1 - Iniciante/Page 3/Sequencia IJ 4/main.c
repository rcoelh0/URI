#include <stdio.h>
#include <stdlib.h>

/*/
@type: Function - int main()
@title: Sequencia IJ 4

@author: Rafael Lima Coelho
@since: 16-10-2019
@version: RLC.1.0.URI

@description: Você deve fazer um programa que apresente a sequencia conforme o exemplo.
			 
@param: [I], inteiro, Contador crescente repetitivo.
@param: [J], inteiro, Contador crescente.
@param: [K], inteiro, Contador dois em dois.

@return: caractere, Imprima a sequencia conforme exemplo abaixo.
/*/

/*Inicio da Função*/
int main() {
	/*Declaração das variáveis*/
	int I, J = 1, K;
			
	for(I = 0;I < 3; I++)
	{
		printf("I=%d J=%d\n",I,J);		
		printf("I=%d J=%d\n",I,J+1);
		printf("I=%d J=%d\n",I,J+2);
		
		for(K = 2;K < 10 && I < 2; K+=2)
		{
			printf("I=%d.%d J=%d.%d\n",I,K,J,K);		
			printf("I=%d.%d J=%d.%d\n",I,K,J+1,K);
			printf("I=%d.%d J=%d.%d\n",I,K,J+2,K);	
		}
		
		J++;	
	}	
	
	/*Retorno da função para o fim do programa*/
	return 0;
}
