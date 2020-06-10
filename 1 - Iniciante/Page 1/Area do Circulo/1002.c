#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*/
@type: Function - int main()
@title: �rea do C�rculo

@author: Rafael Lima Coelho
@since: 10-06-2019
@version: RLC.1.0.URI

@description: Este programa realiza o calculo da �rea de um c�rculo e imprime na tela o resultado.
@param: [nR], double, Guarda o valor do raio digitado pelo usu�rio.
@param: [nPi], double, Guarda o valor de pi = 3,14159.
@param: [nA], double, Guarda a �rea da circunfer�ncia, pi * nR�.

@return: numerico, A �rea calculada do c�rculo.
/*/

/*Inicio da Fun��o*/
int main() {
	/*Declara��o das variaveis*/
	double nR = 0.0000, nPi = 3.14159, nA = 0.0000;
	
	/*Capturando valores digitados pelo usu�rio*/
	scanf("%lf",&nR);

	/*Calculando o valor de nR� e de nA*/	
	nA = nPi * pow(nR,2);//pow � a fun��o respons�vel em excutar a potencia��o de uma vari�vel. sintaxe: pow([base],[expoente]. => nR�
	
	/*Mostrando na tela o valor de nA*/
	printf("A=%.4lf\n", nA);
	
	/*Retorno da fun��o para o fim do programa*/
	return 0;
}
