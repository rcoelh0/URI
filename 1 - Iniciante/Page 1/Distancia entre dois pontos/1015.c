#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*/
@type: Function - int main()
@title: Distância Entre Dois Pontos

@author: Rafael Lima Coelho
@since: 10-06-2019
@version: RLC.1.0.URI

@description: O programa Le quatro valores correspondentes aos eixos x e y de dois pontos quaisquer no plano, p1(x1,y1) e p2(x2,y2) 
              e calcula a distância entre eles. Fórmula: sqrt(pow((nX2 - nX1),2) + pow((nY2 - nY1),2))
@param: [nX1], double, Guarda o primeiro valor digitado pelo usuário.
@param: [nY1], double, Guarda o segundo valor digitado pelo usuário.
@param: [nX2], double, Guarda o primeiro valor digitado pelo usuário.
@param: [nY2], double, Guarda o segundo valor digitado pelo usuário.
@param: [nDis], double, Guarda a distância entre dois pontos.

@return: numerico, Imprime o valor da distância segundo a fórmula fornecida, com 4 casas após o ponto decimal..
/*/

/*Inicio da Função*/
int main() {
	/*Declaração das variaveis*/
	double nX1 = 0.0, nY1 = 0.0, nX2 = 0.0, nY2 = 0.0, nDis = 0.0000;
	
	/*Capturando valores digitados pelo usuário*/
	scanf("%lf",&nX1);
	scanf("%lf",&nY1);
	scanf("%lf",&nX2);
	scanf("%lf",&nY2);
	
	/*Calcula a distância entre dois pontos*/	
	nDis = sqrt(pow((nX2 - nX1),2) + pow((nY2 - nY1),2));//'pow' é a função responsável em excutar a potenciação de uma variável. sintaxe: pow([base],[expoente]. => (nX2 - nX1)²
														 //sqrt([numero]) é a função que calcula a raiz quadrada de um número.
	
	/*Mostrando na tela a distância entre dois pontos*/	
	printf("%.4lf\n", nDis);
	
	/*Retorno da função para o fim do programa*/
	return 0;
}
