#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*/
@type: Function - int main()
@title: Divisores 1

@author: Rafael Lima Coelho
@since: 23-10-2019
@version: RLC.1.0.URI

@description: Ler um número inteiro N e calcular todos os seus divisores.

@param: [iCont], inteiro, Contador.
@param: [iN], inteiro, Numero inserido pelo usuario.

@return: inteiro, Escreva todos os divisores positivos de N, um valor por linha.	

/*/

/*Inicio da Função*/
int main() {
	/*Declaração das variáveis*/
	int iCont, iN;
	
	scanf("%d",&iN);
				
	for(iCont = 1; iCont <= iN; iCont++)
	{
		if(iN % iCont == 0)
		{
			printf("%d\n",iCont);	
		}
	}
							
	/*Retorno da função para o fim do programa*/
	return 0;
}
