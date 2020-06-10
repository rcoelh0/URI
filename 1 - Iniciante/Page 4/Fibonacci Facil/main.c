#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*/
@type: Function - int main()
@title: Fibonacci F�cil

@author: Rafael Lima Coelho
@since: 20-10-2019
@version: RLC.1.0.URI

@description: A seguinte sequ�ncia de n�meros 0 1 1 2 3 5 8 13 21... � conhecida como s�rie de Fibonacci. 
	          Nessa sequ�ncia, cada n�mero, depois dos 2 primeiros, � igual � soma dos 2 anteriores. 
			  Escreva um algoritmo que leia um inteiro N (N < 46) e mostre os N primeiros n�meros dessa s�rie.

@param: [iNum], inteiro, Quantidade de numeros para sequencia fibonacci.
@param: [iCont], inteiro, Contador para auxiliar a sequencia.
@param: [iAnt], inteiro, Penultimo numero inserido.
@param: [iAnt2], inteiro, Ultimo numero inserido.
@param: [iAtu], inteiro, Numero atual da sequencia.


@return: inteiro, Os valores devem ser mostrados na mesma linha, separados por um espa�o em branco. N�o deve haver espa�o ap�s o �ltimo valor.

/*/

/*Inicio da Fun��o*/
int main() {
	/*Declara��o das vari�veis*/
	int iNum = 0, iCont, iAnt = 0, iAnt2 = 1, iAtu;
	
	scanf("%d",&iNum);
	
	printf("%d %d ",iAnt, iAnt2);
		
	for(iCont = 1; iCont < iNum - 1; iCont++)
	{
		iAtu = iAnt + iAnt2;
		iAnt = iAnt2;
		iAnt2 = iAtu;
				
		if(iCont == iNum -2)
		{
			printf("%d\n",iAtu);
		}
		else
		{
			printf("%d ",iAtu);	
		}
		
	}
						
	/*Retorno da fun��o para o fim do programa*/
	return 0;
}
