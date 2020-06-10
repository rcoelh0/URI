#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*/
@type: Function - int main()
@title: Par ou Impar

@author: Rafael Lima Coelho
@since: 15-10-2019
@version: RLC.1.0.URI

@description: Leia um valor inteiro N. Este valor será a quantidade de valores que serão lidos em seguida. 
              Para cada valor lido, mostre uma mensagem em inglês dizendo se este valor lido é par (EVEN), ímpar (ODD), positivo (POSITIVE) ou negativo (NEGATIVE). 
			  No caso do valor ser igual a zero (0), embora a descrição correta seja (EVEN NULL), pois por definição zero é par, seu programa deverá imprimir apenas NULL.
			  
@param: [nN], inteiro, Numero digitado pelo usuario, quantidade de numeros a serem digitados.
@param: [nX], inteiro, Valores a serem avaliados se são positivos, negativos, impares, pares ou nulos.
@param: [nCont], inteiro, Contador do laço de repetição For.

@return: caractere, Para cada caso, imprima uma mensagem correspondente, de acordo com o exemplo. 
                    Todas as letras deverão ser maiúsculas e sempre deverá haver um espaço entre duas palavras impressas na mesma linha.
/*/

/*Inicio da Função*/
int main() {
	/*Declaração das variaveis*/
	int nN = 0, nCont;
	
	/*Capturando valores digitados pelo usuário*/
	scanf("%d",&nN);
	
	int nX[nN];
	
	/*Verificando as condições do problema*/
	if(nN <= 10000)
	{
		/*O laco para montar o vetor*/
		for(nCont = 0; nCont < nN; nCont++)
		{			
			scanf("%d",&nX[nCont]);
		}		
		
		/*O laco que repede as N vezes digitadas pelo usuario*/
		for(nCont = 0; nCont < nN; nCont++)
		{			
			/*Verificac se o numero é positivo*/		
			if(nX[nCont] > 0)
			{
				/*Verificac se o numero é par*/
				if( nX[nCont] % 2 == 0)
				{
					printf("EVEN POSITIVE\n");
				}
				/*Verificac se o numero é impar*/
				else
				{
					printf("ODD POSITIVE\n");	
				}
			}
			/*Verificac se o numero é negativo*/
			else if(nX[nCont] < 0)
			{
				/*Verificac se o numero é par*/
				if((nX[nCont] * -1) % 2 == 0)
				{
					printf("EVEN NEGATIVE\n");
				}
				/*Verificac se o numero é impar*/
				else
				{
					printf("ODD NEGATIVE\n");
				}
			}
			/*Verificac se o numero é nulo*/
			else
			{
				printf("NULL\n");
			}
		}
	}
			
	/*Retorno da função para o fim do programa*/
	return 0;
}

