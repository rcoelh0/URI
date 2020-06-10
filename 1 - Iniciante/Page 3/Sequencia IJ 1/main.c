#include <stdio.h>
#include <stdlib.h>

/*/
@type: Function - int main()
@title: Sequencia IJ 1

@author: Rafael Lima Coelho
@since: 16-10-2019
@version: RLC.1.0.URI

@description: Voc� deve fazer um programa que apresente a sequencia conforme o exemplo.
			 
@param: [I], inteiro, Contador crescente.
@param: [J], inteiro, Contador decrescente.

@return: caractere, Imprima a sequencia conforme exemplo abaixo.
/*/

/*Inicio da Fun��o*/
int main() {
	/*Declara��o das vari�veis*/
	int I, J = 60;
			
	for(I = 1;J >= 0; I+=3)
	{
		printf("I=%d J=%d\n",I,J);		
		J -= 5;
	}	
	
	/*Retorno da fun��o para o fim do programa*/
	return 0;
}
