#include <stdio.h>
#include <stdlib.h>

/*/
@type: Function - int main()
@title: Tipos de Tri�ngulo

@author: Rafael Lima Coelho
@since: 30-06-2019
@version: RLC.1.0.URI

@description: Leia 3 valores de ponto flutuante A, B e C e ordene-os em ordem decrescente, de modo que o lado A representa o maior dos 3 lados. 
			  A seguir, determine o tipo de tri�ngulo que estes tr�s lados formam, com base nos seguintes casos, sempre escrevendo uma mensagem adequada.
			  
@param: [nA], inteiro, Guarda a primeira vari�vel digitada pelo usu�rio.
@param: [nB], inteiro, Guarda a segunda vari�vel digitada pelo usu�rio.
@param: [nC], inteiro, Guarda a terceira vari�vel digitada pelo usu�rio.

@return: caractere, se A >= B+C, apresente a mensagem: NAO FORMA TRIANGULO;
					se A2 = B2 + C2, apresente a mensagem: TRIANGULO RETANGULO;
					se A2 > B2 + C2, apresente a mensagem: TRIANGULO OBTUSANGULO;
					se A2 < B2 + C2, apresente a mensagem: TRIANGULO ACUTANGULO;
					se os tr�s lados forem iguais, apresente a mensagem: TRIANGULO EQUILATERO;
					se apenas dois dos lados forem iguais, apresente a mensagem: TRIANGULO ISOSCELES.
/*/

/*Inicio da Fun��o*/
int main() {
	/*Declara��o das vari�veis*/
	double nA = 0.0, nB = 0.0, nC = 0.0;
	
	/*Capturando valores digitados pelo usu�rio*/
	scanf("%lf",&nA);
	scanf("%lf",&nB);
	scanf("%lf",&nC);

	/*Verificando se o usu�rio digitou somente n�meros positivos*/
	if(nA > 0.0 && nB > 0.0 && nC > 0.0)
	{
		/*Verificando se os valores informados formam um tri�ngulo*/
		if(nA >= nB + nC || nB >= nA + nC || nC >= nB + nA)
		{
			printf("NAO FORMA TRIANGULO\n");
		}
		else
		{
			/*Verifica se � um tri�ngulo ret�ngulo*/
			if(((nA * nA) == ((nB * nB) + (nC * nC))) || ((nB * nB) == ((nA * nA) + (nC * nC))) || ((nC * nC) == ((nB *nB) + (nA * nA))))
			{
				printf("TRIANGULO RETANGULO\n");
			}
			/*Verifica se � um tri�ngulo obtus�ngulo*/
			if(((nA * nA) > ((nB * nB) + (nC * nC))) || ((nB * nB) > ((nA * nA) + (nC * nC))) || ((nC * nC) > ((nB *nB) + (nA * nA))))
			{
				printf("TRIANGULO OBTUSANGULO\n");
			}
			/*Verifica se � um tri�ngulo acut�ngulo*/
			if(((nA * nA) < ((nB * nB) + (nC * nC))) && ((nB * nB) < ((nA * nA) + (nC * nC))) && ((nC * nC) < ((nB *nB) + (nA * nA))))
			{
				printf("TRIANGULO ACUTANGULO\n");
			}
			/*Verifica se � um tri�ngulo equil�tero*/
			if(nA == nB && nA == nC)
			{
				printf("TRIANGULO EQUILATERO\n");
			}
			/*Verifica se � um tri�ngulo is�sceles*/
		    else 
			if(nA == nB || nB == nC || nA == nC)
			{
				printf("TRIANGULO ISOSCELES\n");
			}
		}
	}
	
	/*Retorno da fun��o para o fim do programa*/
	return 0;
}
