#include <stdio.h>
#include <stdlib.h>

/*/
@type: Function - int main()
@title: Coordenadas de um ponto

@author: Rafael Lima Coelho
@since: 30-06-2019
@version: RLC.1.0.URI

@description: Leia 2 valores com uma casa decimal (x e y), que devem representar as coordenadas de um ponto em um plano. 
			  A seguir, determine qual o quadrante ao qual pertence o ponto, ou se está sobre um dos eixos cartesianos ou na origem (x = y = 0).
			  
@param: [nX], double, Guarda o primeiro número digitado pelo usuário.
@param: [nY], double, Guarda o segundo número digitado pelo usuário.

@return: caractere, Se o ponto estiver na origem, escreva a mensagem “Origem”.
					Se o ponto estiver sobre um dos eixos escreva “Eixo X” ou “Eixo Y”, conforme for a situação.

/*/

/*Inicio da Função*/
int main() {
	/*Declaração das variáveis*/
	double nX = 0.0, nY = 0.0;
	
	/*Capturando valores digitados pelo usuário*/
	scanf("%lf",&nX);
	scanf("%lf",&nY);
	
	/*Q1 X e Y tem que ser maior que zero*/	
	if(nX > 0.0 && nY > 0.0)
	{
		printf("Q1\n");
	}
	/*Q2 X tem que ser menor que zero e Y tem que ser maior que zero*/
	else if(nX < 0.0 && nY > 0.0)
	{
		printf("Q2\n");
	}
	/*Q3 X e Y tem que ser menor que zero*/
	else if(nX < 0.0 && nY < 0.0)
	{
		printf("Q3\n");
	}
	/*Q4 X tem que ser maior que zero e Y tem que ser menor que zero*/
	else if(nX > 0.0 && nY < 0.0)
	{
		printf("Q4\n");
	}
	/*Origem X e Y tem que ser igual a zero*/
	else if(nX == 0.0 && nY == 0.0)
	{
		printf("Origem\n");
	}
	/*Eixo X, X tem que ser diferente de zero e Y tem que ser igual a zero*/
	else if(nX != 0.0 && nY == 0.0)
	{
		printf("Eixo X\n");
	}
	/*Eixo Y, X tem que ser igual a zero e Y tem que ser diferente de zero*/
	else
	{
		printf("Eixo Y\n");
	}
	
	/*Retorno da função para o fim do programa*/
	return 0;
}
