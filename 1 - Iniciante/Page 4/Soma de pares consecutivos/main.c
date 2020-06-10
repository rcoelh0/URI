#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*/
@type: Function - int main()
@title: Soma de Pares Consecutivos

@author: Rafael Lima Coelho
@since: 23-10-2019
@version: RLC.1.0.URI

@description: O programa deve ler um valor inteiro X indefinidas vezes. 
			 (O programa ir� parar quando o valor de X for igual a 0). Para cada X lido, 
			 imprima a soma dos 5 pares consecutivos a partir de X, inclusive o X , se for par. 
			 Se o valor de entrada for 4, por exemplo, a sa�da deve ser 40, que � o resultado da opera��o: 4+6+8+10+12, enquanto que 
			 se o valor de entrada for 11, por exempo, a sa�da deve ser 80, que � a soma de 12+14+16+18+20.

@param: [iCont2], inteiro, Contador. La�o interno.
@param: [iAux], inteiro, Condi��o de saida do la�o interno.
@param: [iX], inteiro, Numero inserido pelo usuario. Item inicial para teste.
@param: [iSoma], inteiro, Soma dos numeros impraes.

@return: inteiro, Imprima a saida conforme a explica��o acima e o exemplo abaixo.

/*/

/*Inicio da Fun��o*/
int main() {
	/*Declara��o das vari�veis*/
	int iCont, iCont2, iAux = 1, iX = 1, iSoma = 0;
					
	while(iX != 0)
	{
		scanf("%d",&iX);
		
		iCont2 = iX;
		
		if(iX != 0)
		{
			while(iAux <= 5)
			{
				if(iCont2 % 2 == 0)
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
	}
							
	/*Retorno da fun��o para o fim do programa*/
	return 0;
}
