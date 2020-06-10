#include <stdio.h>
#include <stdlib.h>

/*/
@type: Function - int main()
@title: Tabuada

@author: Rafael Lima Coelho
@since: 16-10-2019
@version: RLC.1.0.URI

@description: Leia 1 valor inteiro N (2 < N < 1000). A seguir, mostre a tabuada de N:      
			  1 x N = N      2 x N = 2N        ...       10 x N = 10N
			 
@param: [nN], inteiro, Numero de entrada.
@param: [nCont], inteiro, Contador multiplicador.
@param: [nResult], inteiro, resultado da multiplicação

@return: caractere, Imprima a tabuada de N, conforme o exemplo fornecido.
/*/

/*Inicio da Função*/
int main() {
	/*Declaração das variáveis*/
	int nN = 0, nCont = 0, nResult = 0;

	scanf("%d",&nN);
	
	if(nN >= 2 &&nN <= 1000)
	{
		for(nCont = 1;nCont <= 10; nCont++)
		{
			nResult = nN * nCont;
			printf("%d x %d = %d\n",nCont,nN,nResult);		
		}
	}	
		
	/*Retorno da função para o fim do programa*/
	return 0;
}
