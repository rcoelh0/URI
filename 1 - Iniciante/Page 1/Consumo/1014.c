#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*/
@type: Function - int main()
@title: Consumo

@author: Rafael Lima Coelho
@since: 10-06-2019
@version: RLC.1.0.URI

@description: Programa calcula o consumo médio de um automóvel sendo fornecidos a distância total percorrida (em Km) e o total de combustível gasto (em litros).
@param: [nKm], inteiro, Guarda o primeiro valor digitado pelo usuário.
@param: [nLitro], double, Guarda o segundo valor digitado pelo usuário.
@param: [nCons], double, Guarda o consumo do automóvel. nKm/nLitro.

@return: numerico, Apresenta o consumo médio de um automóvel com 3 casas após a vírgula, seguido da mensagem "km/l".
/*/

/*Inicio da Função*/
int main() {
	/*Declaração das variaveis*/
	int nKm = 0;
	double nLitro = 0.0, nCons = 0.000;
	
	/*Capturando valores digitados pelo usuário*/
	scanf("%d",&nKm);
	scanf("%lf",&nLitro);
	
	/*Calcula o consumo médio do automóvel*/	
	nCons = nKm/nLitro;
	
	/*Mostrando na tela o consumo médio do automóvel*/	
	printf("%.3lf km/l\n", nCons);
	
	/*Retorno da função para o fim do programa*/
	return 0;
}
