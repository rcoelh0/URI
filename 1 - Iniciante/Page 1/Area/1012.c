#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*/
@type: Function - int main()
@title: Área

@author: Rafael Lima Coelho
@since: 10-06-2019
@version: RLC.1.0.URI

@description: Programa que le três valores com ponto flutuante de dupla precisão: A, B e C. Em seguida, calcula e mostra: 
			  a) a área do triângulo retângulo que tem A por base e C por altura. 
			  b) a área do círculo de raio C. (pi = 3.14159) 
			  c) a área do trapézio que tem A e B por bases e C por altura. 
			  d) a área do quadrado que tem lado B. 
			  e) a área do retângulo que tem lados A e B. 
@param: [nA], double, Guarda o primeiro valor digitado pelo usuário.
@param: [nB], double, Guarda o segundo valor digitado pelo usuário.
@param: [nC], double, Guarda o terceiro valor digitado pelo usuário.
@param: [nArea], double, Guarda a área das figuras geométricas. a) (nA * nC)/2, b) 3.14159 * pow(nC,2), c)((nA + nB) * nC)/2, d) pow(nB,2), e) nA * nB.

@return: numerico, A área calculada do triângulo retângulo.
@return: numerico, A área calculada do círculo.
@return: numerico, A área calculada do trapézio.
@return: numerico, A área calculada do quadrado.
@return: numerico, A área calculada do retângulo.
/*/

/*Inicio da Função*/
int main() {
	/*Declaração das variaveis*/
	double nA = 0.000, nB = 0.000, nC = 0.000, nArea = 0.000;
	
	/*Capturando valores digitados pelo usuário*/
	scanf("%lf",&nA);
	scanf("%lf",&nB);
	scanf("%lf",&nC);
	
	/*Calculando o valor da area. Letra a)*/	
	nArea = (nA * nC)/2;
	
	/*Mostrando na tela o valor da area do triangulo retangulo*/
	printf("TRIANGULO: %.3lf\n", nArea);

	/*Calculando o valor da area. Letra b)*/	
	nArea = 3.14159 * pow(nC,2);//pow é a função responsável em excutar a potenciação de uma variável. sintaxe: pow([base],[expoente]. => nR²
	
	/*Mostrando na tela o valor da area da circunferência*/
	printf("CIRCULO: %.3lf\n", nArea);
	
	/*Calculando o valor da area. Letra c)*/	
	nArea = ((nA + nB) * nC)/2;
	
	/*Mostrando na tela o valor da area do trapézio*/
	printf("TRAPEZIO: %.3lf\n", nArea);
	
	/*Calculando o valor da area. Letra d)*/	
	nArea = pow(nB,2);//pow é a função responsável em excutar a potenciação de uma variável. sintaxe: pow([base],[expoente]. => nR²
	
	/*Mostrando na tela o valor da area do quadrado*/
	printf("QUADRADO: %.3lf\n", nArea);
	
	/*Calculando o valor da area. Letra e)*/	
	nArea = nA * nB;
	
	/*Mostrando na tela o valor da area do retângulo*/	
	printf("RETANGULO: %.3lf\n", nArea);
	
	/*Retorno da função para o fim do programa*/
	return 0;
}
