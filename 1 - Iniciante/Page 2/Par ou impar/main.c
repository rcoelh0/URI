#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*/
@type: Function - int main()
@title: Par ou Impar

@author: Rafael Lima Coelho
@since: 15-10-2019
@version: RLC.1.0.URI

@description: Leia um valor inteiro N. Este valor ser� a quantidade de valores que ser�o lidos em seguida. 
              Para cada valor lido, mostre uma mensagem em ingl�s dizendo se este valor lido � par (EVEN), �mpar (ODD), positivo (POSITIVE) ou negativo (NEGATIVE). 
			  No caso do valor ser igual a zero (0), embora a descri��o correta seja (EVEN NULL), pois por defini��o zero � par, seu programa dever� imprimir apenas NULL.
			  
@param: [nN], inteiro, Numero digitado pelo usuario, quantidade de numeros a serem digitados.
@param: [nX], inteiro, Valores a serem avaliados se s�o positivos, negativos, impares, pares ou nulos.
@param: [nCont], inteiro, Contador do la�o de repeti��o For.

@return: caractere, Para cada caso, imprima uma mensagem correspondente, de acordo com o exemplo. 
                    Todas as letras dever�o ser mai�sculas e sempre dever� haver um espa�o entre duas palavras impressas na mesma linha.
/*/

/*Inicio da Fun��o*/
int main() {
	/*Declara��o das variaveis*/
	int nN = 0, nCont;
	
	/*Capturando valores digitados pelo usu�rio*/
	scanf("%d",&nN);
	
	int nX[nN];
	
	/*Verificando as condi��es do problema*/
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
			/*Verificac se o numero � positivo*/		
			if(nX[nCont] > 0)
			{
				/*Verificac se o numero � par*/
				if( nX[nCont] % 2 == 0)
				{
					printf("EVEN POSITIVE\n");
				}
				/*Verificac se o numero � impar*/
				else
				{
					printf("ODD POSITIVE\n");	
				}
			}
			/*Verificac se o numero � negativo*/
			else if(nX[nCont] < 0)
			{
				/*Verificac se o numero � par*/
				if((nX[nCont] * -1) % 2 == 0)
				{
					printf("EVEN NEGATIVE\n");
				}
				/*Verificac se o numero � impar*/
				else
				{
					printf("ODD NEGATIVE\n");
				}
			}
			/*Verificac se o numero � nulo*/
			else
			{
				printf("NULL\n");
			}
		}
	}
			
	/*Retorno da fun��o para o fim do programa*/
	return 0;
}

