#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*/
@type: Function - int main()
@title: Soma de Ímpares Consecutivos III

@author: Rafael Lima Coelho
@since: 23-10-2019
@version: RLC.1.0.URI

@description: Leia um valor inteiro N que é a quantidade de casos de teste que vem a seguir. 
			  Cada caso de teste consiste de dois inteiros X e Y. 
			  Você deve apresentar a soma de Y ímpares consecutivos a partir de X inclusive o próprio X se ele for ímpar. 
			  Por exemplo:
			  para a entrada 4 5, a saída deve ser 45, que é equivalente à: 5 + 7 + 9 + 11 + 13
			  para a entrada 7 4, a saída deve ser 40, que é equivalente à: 7 + 9 + 11 + 13

@param: [iCont], inteiro, Contador. Laço externo.
@param: [iCont2], inteiro, Contador. Laço interno.
@param: [iAux], inteiro, Condição de saida do laço interno.
@param: [iN], inteiro, Numero inserido pelo usuario. Quantidade de casos.
@param: [iX], inteiro, Numero inserido pelo usuario. Item inicial para teste.
@param: [iY], inteiro, Numero inserido pelo usuario. Item final para teste.
@param: [iSoma], inteiro, Soma dos numeros impraes.

@return: inteiro, Imprima a soma dos consecutivos números ímpares a partir do valor X.

/*/

/*Inicio da Função*/
int main() {
	/*Declaração das variáveis*/
	int iCont, iCont2, iAux = 1, iN = 0, iX = 0, iY = 0, iSoma = 0;
	
	scanf("%d",&iN);
				
	for(iCont = 0; iCont < iN; iCont++)
	{
		scanf("%d %d",&iX,&iY);
		
		iCont2 = iX;
		
		while(iAux <= iY)
		{
			if(iCont2 % 2 != 0)
			{
				iSoma += iCont2;	
				iAux++;
			}
			iCont2++;	
		}
		
		printf("%d\n",iSoma);
		
		iSoma = 0;
		iAux = 1;
	}
							
	/*Retorno da função para o fim do programa*/
	return 0;
}
