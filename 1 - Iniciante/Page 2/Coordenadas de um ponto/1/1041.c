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
	
	/*Verificando o ponto X, se o ponto X for maior do que zero a resposta ou é "Q1", "Q4" ou "Eixo X"*/	
	if(nX > 0.0)
	{
		/*Verificando o ponto Y, se o ponto Y for maior do que zero a resposta é "Q1", se for menor é "Q4" e se for igual a zero a resposta é "Eixo X"*/
		if(nY > 0.0)
		{
			printf("Q1\n");
		}
		else if(nY < 0.0)
		{
			printf("Q4\n");
		}
		else
		{
			printf("Eixo X\n");
		}
	}
	/*Verificando o ponto X, se o ponto X for menor do que zero a resposta é "Q2", "Q3" ou "Eixo X"*/
	else if(nX < 0.0)
	{
		/*Verificando o ponto Y, se o ponto Y for maior do que zero a resposta é "Q2", se for menor é "Q3" e se for igual a zero a resposta é "Eixo X"*/
		if(nY > 0.0)
		{
			printf("Q2\n");
		}
		else if(nY < 0.0)
		{
			printf("Q3\n");
		}
		else
		{
			printf("Eixo X\n");
		}	
	}
	/*Verificando o ponto X, se o ponto X for igual a zero a resposta é "Eixo Y" ou "Origem"*/
	else
	{
		if(nY > 0.0 || nY < 0.0)
		{
			printf("Eixo Y\n");
		}
		else
		{
			printf("Origem\n");
		}
	}
	
	/*Retorno da função para o fim do programa*/
	return 0;
}
