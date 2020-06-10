#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*/
@type: Function - int main()
@title: Soma de �mpares Consecutivos III

@author: Rafael Lima Coelho
@since: 23-10-2019
@version: RLC.1.0.URI

@description: Leia um valor inteiro N que � a quantidade de casos de teste que vem a seguir. 
			  Cada caso de teste consiste de dois inteiros X e Y. 
			  Voc� deve apresentar a soma de Y �mpares consecutivos a partir de X inclusive o pr�prio X se ele for �mpar. 
			  Por exemplo:
			  para a entrada 4 5, a sa�da deve ser 45, que � equivalente �: 5 + 7 + 9 + 11 + 13
			  para a entrada 7 4, a sa�da deve ser 40, que � equivalente �: 7 + 9 + 11 + 13

@param: [iCont], inteiro, Contador. La�o externo.
@param: [iCont2], inteiro, Contador. La�o interno.
@param: [iAux], inteiro, Condi��o de saida do la�o interno.
@param: [iN], inteiro, Numero inserido pelo usuario. Quantidade de casos.
@param: [iX], inteiro, Numero inserido pelo usuario. Item inicial para teste.
@param: [iY], inteiro, Numero inserido pelo usuario. Item final para teste.
@param: [iSoma], inteiro, Soma dos numeros impraes.

@return: inteiro, Imprima a soma dos consecutivos n�meros �mpares a partir do valor X.

/*/

/*Inicio da Fun��o*/
int main() {
	/*Declara��o das vari�veis*/
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
							
	/*Retorno da fun��o para o fim do programa*/
	return 0;
}
