#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*/
@type: Function - int main()
@title: Dist�ncia Entre Dois Pontos

@author: Rafael Lima Coelho
@since: 10-06-2019
@version: RLC.1.0.URI

@description: O programa Le quatro valores correspondentes aos eixos x e y de dois pontos quaisquer no plano, p1(x1,y1) e p2(x2,y2) 
              e calcula a dist�ncia entre eles. F�rmula: sqrt(pow((nX2 - nX1),2) + pow((nY2 - nY1),2))
@param: [nX1], double, Guarda o primeiro valor digitado pelo usu�rio.
@param: [nY1], double, Guarda o segundo valor digitado pelo usu�rio.
@param: [nX2], double, Guarda o primeiro valor digitado pelo usu�rio.
@param: [nY2], double, Guarda o segundo valor digitado pelo usu�rio.
@param: [nDis], double, Guarda a dist�ncia entre dois pontos.

@return: numerico, Imprime o valor da dist�ncia segundo a f�rmula fornecida, com 4 casas ap�s o ponto decimal..
/*/

/*Inicio da Fun��o*/
int main() {
	/*Declara��o das variaveis*/
	double nX1 = 0.0, nY1 = 0.0, nX2 = 0.0, nY2 = 0.0, nDis = 0.0000;
	
	/*Capturando valores digitados pelo usu�rio*/
	scanf("%lf",&nX1);
	scanf("%lf",&nY1);
	scanf("%lf",&nX2);
	scanf("%lf",&nY2);
	
	/*Calcula a dist�ncia entre dois pontos*/	
	nDis = sqrt(pow((nX2 - nX1),2) + pow((nY2 - nY1),2));//'pow' � a fun��o respons�vel em excutar a potencia��o de uma vari�vel. sintaxe: pow([base],[expoente]. => (nX2 - nX1)�
														 //sqrt([numero]) � a fun��o que calcula a raiz quadrada de um n�mero.
	
	/*Mostrando na tela a dist�ncia entre dois pontos*/	
	printf("%.4lf\n", nDis);
	
	/*Retorno da fun��o para o fim do programa*/
	return 0;
}
