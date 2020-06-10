#include <stdio.h>
#include <stdlib.h>

/*/
@type: Function - int main()
@title: Dist�ncia

@author: Rafael Lima Coelho
@since: 10-06-2019
@version: RLC.1.0.URI

@description: Dois carros (X e Y) partem em uma mesma dire��o. O carro X sai com velocidade constante de 60 Km/h e o carro Y sai com velocidade constante de 90 Km/h.
			  Em uma hora (60 minutos) o carro Y consegue se distanciar 30 quil�metros do carro X, ou seja, consegue se afastar um quil�metro a cada 2 minutos.
              Leia a dist�ncia (em Km) e calcule quanto tempo leva (em minutos) para o carro Y tomar essa dist�ncia do outro carro.
@param: [nDis], inteiro, Guarda o primeiro numero digitado pelo usu�rio.
@param: [nTemp], inteiro, Guarda o resultado da expre��o nDis * 2.

@return: num�rico, Imprima o tempo necess�rio seguido da mensagem "minutos"..
/*/

/*Inicio da Fun��o*/
int main() {
	/*Declara��o das vari�veis*/
	int nDis = 0, nTemp = 0;
	
	/*Capturando valores digitados pelo usu�rio*/
	scanf("%d",&nDis);
	
	/*Calculando o valo de nTemp*/	
	nTemp = nDis * 2;
	
	/*Mostrando na tela o valor de nTemp*/
	printf("%d minutos\n", nTemp);
	
	/*Retorno da fun��o para o fim do programa*/
	return 0;
}
