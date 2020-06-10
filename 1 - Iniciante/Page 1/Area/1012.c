#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*/
@type: Function - int main()
@title: �rea

@author: Rafael Lima Coelho
@since: 10-06-2019
@version: RLC.1.0.URI

@description: Programa que le tr�s valores com ponto flutuante de dupla precis�o: A, B e C. Em seguida, calcula e mostra: 
			  a) a �rea do tri�ngulo ret�ngulo que tem A por base e C por altura. 
			  b) a �rea do c�rculo de raio C. (pi = 3.14159) 
			  c) a �rea do trap�zio que tem A e B por bases e C por altura. 
			  d) a �rea do quadrado que tem lado B. 
			  e) a �rea do ret�ngulo que tem lados A e B. 
@param: [nA], double, Guarda o primeiro valor digitado pelo usu�rio.
@param: [nB], double, Guarda o segundo valor digitado pelo usu�rio.
@param: [nC], double, Guarda o terceiro valor digitado pelo usu�rio.
@param: [nArea], double, Guarda a �rea das figuras geom�tricas. a) (nA * nC)/2, b) 3.14159 * pow(nC,2), c)((nA + nB) * nC)/2, d) pow(nB,2), e) nA * nB.

@return: numerico, A �rea calculada do tri�ngulo ret�ngulo.
@return: numerico, A �rea calculada do c�rculo.
@return: numerico, A �rea calculada do trap�zio.
@return: numerico, A �rea calculada do quadrado.
@return: numerico, A �rea calculada do ret�ngulo.
/*/

/*Inicio da Fun��o*/
int main() {
	/*Declara��o das variaveis*/
	double nA = 0.000, nB = 0.000, nC = 0.000, nArea = 0.000;
	
	/*Capturando valores digitados pelo usu�rio*/
	scanf("%lf",&nA);
	scanf("%lf",&nB);
	scanf("%lf",&nC);
	
	/*Calculando o valor da area. Letra a)*/	
	nArea = (nA * nC)/2;
	
	/*Mostrando na tela o valor da area do triangulo retangulo*/
	printf("TRIANGULO: %.3lf\n", nArea);

	/*Calculando o valor da area. Letra b)*/	
	nArea = 3.14159 * pow(nC,2);//pow � a fun��o respons�vel em excutar a potencia��o de uma vari�vel. sintaxe: pow([base],[expoente]. => nR�
	
	/*Mostrando na tela o valor da area da circunfer�ncia*/
	printf("CIRCULO: %.3lf\n", nArea);
	
	/*Calculando o valor da area. Letra c)*/	
	nArea = ((nA + nB) * nC)/2;
	
	/*Mostrando na tela o valor da area do trap�zio*/
	printf("TRAPEZIO: %.3lf\n", nArea);
	
	/*Calculando o valor da area. Letra d)*/	
	nArea = pow(nB,2);//pow � a fun��o respons�vel em excutar a potencia��o de uma vari�vel. sintaxe: pow([base],[expoente]. => nR�
	
	/*Mostrando na tela o valor da area do quadrado*/
	printf("QUADRADO: %.3lf\n", nArea);
	
	/*Calculando o valor da area. Letra e)*/	
	nArea = nA * nB;
	
	/*Mostrando na tela o valor da area do ret�ngulo*/	
	printf("RETANGULO: %.3lf\n", nArea);
	
	/*Retorno da fun��o para o fim do programa*/
	return 0;
}
