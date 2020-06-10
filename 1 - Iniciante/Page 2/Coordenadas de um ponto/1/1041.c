#include <stdio.h>
#include <stdlib.h>

/*/
@type: Function - int main()
@title: Coordenadas de um ponto

@author: Rafael Lima Coelho
@since: 30-06-2019
@version: RLC.1.0.URI

@description: Leia 2 valores com uma casa decimal (x e y), que devem representar as coordenadas de um ponto em um plano. 
			  A seguir, determine qual o quadrante ao qual pertence o ponto, ou se est� sobre um dos eixos cartesianos ou na origem (x = y = 0).
			  
@param: [nX], double, Guarda o primeiro n�mero digitado pelo usu�rio.
@param: [nY], double, Guarda o segundo n�mero digitado pelo usu�rio.

@return: caractere, Se o ponto estiver na origem, escreva a mensagem �Origem�.
					Se o ponto estiver sobre um dos eixos escreva �Eixo X� ou �Eixo Y�, conforme for a situa��o.

/*/

/*Inicio da Fun��o*/
int main() {
	/*Declara��o das vari�veis*/
	double nX = 0.0, nY = 0.0;
	
	/*Capturando valores digitados pelo usu�rio*/
	scanf("%lf",&nX);
	scanf("%lf",&nY);
	
	/*Verificando o ponto X, se o ponto X for maior do que zero a resposta ou � "Q1", "Q4" ou "Eixo X"*/	
	if(nX > 0.0)
	{
		/*Verificando o ponto Y, se o ponto Y for maior do que zero a resposta � "Q1", se for menor � "Q4" e se for igual a zero a resposta � "Eixo X"*/
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
	/*Verificando o ponto X, se o ponto X for menor do que zero a resposta � "Q2", "Q3" ou "Eixo X"*/
	else if(nX < 0.0)
	{
		/*Verificando o ponto Y, se o ponto Y for maior do que zero a resposta � "Q2", se for menor � "Q3" e se for igual a zero a resposta � "Eixo X"*/
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
	/*Verificando o ponto X, se o ponto X for igual a zero a resposta � "Eixo Y" ou "Origem"*/
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
	
	/*Retorno da fun��o para o fim do programa*/
	return 0;
}
