#include <stdio.h>
#include <stdlib.h>

/*/
@type: Function - int main()
@title: Gasto de Combustível

@author: Rafael Lima Coelho
@since: 10-06-2019
@version: RLC.1.0.URI

@description: Mostrar a quantidade de litros de combustível gastos em uma viagem, ao utilizar um automóvel que faz 12 KM/L.
@param: [nTemp], inteiro, Guarda o primeiro valor digitado peli usuário.
@param: [nVel], inteiro, Guarda o segundo valor digitado peli usuário.
@param: [nDist], double, Guarda a distancia percorrida, obtido através da equação: nTemp * nVel.
@param: [nCons], double, Guarda o consumo de combustivel, obtido através da equação: nDist/12.

@return: numérico, Imprimir a quantidade de litros necessária para realizar a viagem, com três dígitos após o ponto decimal.
/*/

/*Inicio da Função*/
int main() {
	/*Declaração das variáveis*/
	int nTemp = 0, nVel = 0;
	double nDist = 0.000000, nCons = 0.000;
	
	/*Capturando valores digitados pelo usuário*/
	scanf("%d",&nTemp);
	scanf("%d",&nVel);
	
	/*Calculando o valo da distância*/	
	nDist = nTemp * nVel;
	
	/*Calculando o valo do consumo*/	
	nCons = nDist/12;
	
	/*Mostrando na tela o valor de nCons*/
	printf("%.3lf\n", nCons);
	
	/*Retorno da função para o fim do programa*/
	return 0;
}
