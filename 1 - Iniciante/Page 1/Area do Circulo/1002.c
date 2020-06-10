#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*/
@type: Function - int main()
@title: Área do Círculo

@author: Rafael Lima Coelho
@since: 10-06-2019
@version: RLC.1.0.URI

@description: Este programa realiza o calculo da área de um círculo e imprime na tela o resultado.
@param: [nR], double, Guarda o valor do raio digitado pelo usuário.
@param: [nPi], double, Guarda o valor de pi = 3,14159.
@param: [nA], double, Guarda a área da circunferência, pi * nR².

@return: numerico, A área calculada do círculo.
/*/

/*Inicio da Função*/
int main() {
	/*Declaração das variaveis*/
	double nR = 0.0000, nPi = 3.14159, nA = 0.0000;
	
	/*Capturando valores digitados pelo usuário*/
	scanf("%lf",&nR);

	/*Calculando o valor de nR² e de nA*/	
	nA = nPi * pow(nR,2);//pow é a função responsável em excutar a potenciação de uma variável. sintaxe: pow([base],[expoente]. => nR²
	
	/*Mostrando na tela o valor de nA*/
	printf("A=%.4lf\n", nA);
	
	/*Retorno da função para o fim do programa*/
	return 0;
}
