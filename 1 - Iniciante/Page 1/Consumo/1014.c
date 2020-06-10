#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*/
@type: Function - int main()
@title: Consumo

@author: Rafael Lima Coelho
@since: 10-06-2019
@version: RLC.1.0.URI

@description: Programa calcula o consumo m�dio de um autom�vel sendo fornecidos a dist�ncia total percorrida (em Km) e o total de combust�vel gasto (em litros).
@param: [nKm], inteiro, Guarda o primeiro valor digitado pelo usu�rio.
@param: [nLitro], double, Guarda o segundo valor digitado pelo usu�rio.
@param: [nCons], double, Guarda o consumo do autom�vel. nKm/nLitro.

@return: numerico, Apresenta o consumo m�dio de um autom�vel com 3 casas ap�s a v�rgula, seguido da mensagem "km/l".
/*/

/*Inicio da Fun��o*/
int main() {
	/*Declara��o das variaveis*/
	int nKm = 0;
	double nLitro = 0.0, nCons = 0.000;
	
	/*Capturando valores digitados pelo usu�rio*/
	scanf("%d",&nKm);
	scanf("%lf",&nLitro);
	
	/*Calcula o consumo m�dio do autom�vel*/	
	nCons = nKm/nLitro;
	
	/*Mostrando na tela o consumo m�dio do autom�vel*/	
	printf("%.3lf km/l\n", nCons);
	
	/*Retorno da fun��o para o fim do programa*/
	return 0;
}
