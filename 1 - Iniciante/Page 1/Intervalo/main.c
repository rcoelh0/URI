#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*/
@type: Function - int main()
@title: Intervalo 2

@author: Rafael Lima Coelho
@since: 15-10-2019
@version: RLC.1.0.URI

@description: Leia um valor inteiro N. Este valor ser� a quantidade de valores inteiros X que ser�o lidos em seguida.
			  Mostre quantos destes valores X est�o dentro do intervalo [10,20] e quantos est�o fora do intervalo, mostrando essas informa��es.
			  
@param: [nN], inteiro, Guarda o tamanho do vetor.
@param: [nX], inteiro, Valores digitados pelo usu�rio que ser�o validados.
@param: [nCont], inteiro, Contador do la�o de repeti��o For.
@param: [nIn], inteiro, Numeros dentro do intervalo.
@param: [nOut], inteiro, Numeros fora do intervalo.

@return: caractere, Para cada caso, imprima quantos n�meros est�o dentro (in) e quantos valores est�o fora (out) do intervalo.
/*/

/*Inicio da Fun��o*/
int main() {
	/*Declara��o das variaveis*/
	int nN = 0, nX = 0, nCont = 0, nIn = 0, nOut = 0;
	
	/*Capturando valores digitados pelo usu�rio*/
	scanf("%d",&nN);
	
	/*Verificando as condi��es do problema*/
	if(nN > 0 && nN <= 10000)
	{
		/*Executa N vezes, conforme a variavel nN, para verificar se os numeros est�o no intervalo [10,20]*/
		for(nCont = 0; nCont > nN; nCont++)
		{
			scanf("%d",&nX);
			
			/*Verifica se os numeros digitados est�o no intervalo [10,20]*/
			if(nX >= 10 && nX <= 20)
			{
				nIn++;
			}
			else
			{
				nOut++;
			}
		}
	}
	
	printf("%d in \n", nIn);
	printf("%d out \n", nOut);
			
	/*Retorno da fun��o para o fim do programa*/
	return 0;
}
