#include <stdio.h>
#include <stdlib.h>

/*/
@type: Function - int main()
@title: Gasto de Combust�vel

@author: Rafael Lima Coelho
@since: 10-06-2019
@version: RLC.1.0.URI

@description: Mostrar a quantidade de litros de combust�vel gastos em uma viagem, ao utilizar um autom�vel que faz 12 KM/L.
@param: [nTemp], inteiro, Guarda o primeiro valor digitado peli usu�rio.
@param: [nVel], inteiro, Guarda o segundo valor digitado peli usu�rio.
@param: [nDist], double, Guarda a distancia percorrida, obtido atrav�s da equa��o: nTemp * nVel.
@param: [nCons], double, Guarda o consumo de combustivel, obtido atrav�s da equa��o: nDist/12.

@return: num�rico, Imprimir a quantidade de litros necess�ria para realizar a viagem, com tr�s d�gitos ap�s o ponto decimal.
/*/

/*Inicio da Fun��o*/
int main() {
	/*Declara��o das vari�veis*/
	int nTemp = 0, nVel = 0;
	double nDist = 0.000000, nCons = 0.000;
	
	/*Capturando valores digitados pelo usu�rio*/
	scanf("%d",&nTemp);
	scanf("%d",&nVel);
	
	/*Calculando o valo da dist�ncia*/	
	nDist = nTemp * nVel;
	
	/*Calculando o valo do consumo*/	
	nCons = nDist/12;
	
	/*Mostrando na tela o valor de nCons*/
	printf("%.3lf\n", nCons);
	
	/*Retorno da fun��o para o fim do programa*/
	return 0;
}
