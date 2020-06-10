#include <stdio.h>
#include <stdlib.h>

/*/
@type: Function - int main()
@title: Tipos de Triângulo

@author: Rafael Lima Coelho
@since: 30-06-2019
@version: RLC.1.0.URI

@description: Leia 3 valores de ponto flutuante A, B e C e ordene-os em ordem decrescente, de modo que o lado A representa o maior dos 3 lados. 
			  A seguir, determine o tipo de triângulo que estes três lados formam, com base nos seguintes casos, sempre escrevendo uma mensagem adequada.
			  
@param: [nA], inteiro, Guarda a primeira variável digitada pelo usuário.
@param: [nB], inteiro, Guarda a segunda variável digitada pelo usuário.
@param: [nC], inteiro, Guarda a terceira variável digitada pelo usuário.

@return: caractere, se A >= B+C, apresente a mensagem: NAO FORMA TRIANGULO;
					se A2 = B2 + C2, apresente a mensagem: TRIANGULO RETANGULO;
					se A2 > B2 + C2, apresente a mensagem: TRIANGULO OBTUSANGULO;
					se A2 < B2 + C2, apresente a mensagem: TRIANGULO ACUTANGULO;
					se os três lados forem iguais, apresente a mensagem: TRIANGULO EQUILATERO;
					se apenas dois dos lados forem iguais, apresente a mensagem: TRIANGULO ISOSCELES.
/*/

/*Inicio da Função*/
int main() {
	/*Declaração das variáveis*/
	double nA = 0.0, nB = 0.0, nC = 0.0;
	
	/*Capturando valores digitados pelo usuário*/
	scanf("%lf",&nA);
	scanf("%lf",&nB);
	scanf("%lf",&nC);

	/*Verificando se o usuário digitou somente números positivos*/
	if(nA > 0.0 && nB > 0.0 && nC > 0.0)
	{
		/*Verificando se os valores informados formam um triângulo*/
		if(nA >= nB + nC || nB >= nA + nC || nC >= nB + nA)
		{
			printf("NAO FORMA TRIANGULO\n");
		}
		else
		{
			/*Verifica se é um triângulo retângulo*/
			if(((nA * nA) == ((nB * nB) + (nC * nC))) || ((nB * nB) == ((nA * nA) + (nC * nC))) || ((nC * nC) == ((nB *nB) + (nA * nA))))
			{
				printf("TRIANGULO RETANGULO\n");
			}
			/*Verifica se é um triângulo obtusângulo*/
			if(((nA * nA) > ((nB * nB) + (nC * nC))) || ((nB * nB) > ((nA * nA) + (nC * nC))) || ((nC * nC) > ((nB *nB) + (nA * nA))))
			{
				printf("TRIANGULO OBTUSANGULO\n");
			}
			/*Verifica se é um triângulo acutângulo*/
			if(((nA * nA) < ((nB * nB) + (nC * nC))) && ((nB * nB) < ((nA * nA) + (nC * nC))) && ((nC * nC) < ((nB *nB) + (nA * nA))))
			{
				printf("TRIANGULO ACUTANGULO\n");
			}
			/*Verifica se é um triângulo equilátero*/
			if(nA == nB && nA == nC)
			{
				printf("TRIANGULO EQUILATERO\n");
			}
			/*Verifica se é um triângulo isósceles*/
		    else 
			if(nA == nB || nB == nC || nA == nC)
			{
				printf("TRIANGULO ISOSCELES\n");
			}
		}
	}
	
	/*Retorno da função para o fim do programa*/
	return 0;
}
