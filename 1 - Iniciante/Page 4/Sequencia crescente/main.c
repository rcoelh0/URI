#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*/
@type: Function - int main()
@title: Sequencia crescente

@author: Rafael Lima Coelho
@since: 20-10-2019
@version: RLC.1.0.URI

@description: Este programa deve ler uma vari�vel inteira X in�meras vezes (deve parar quando o valor no arquivo de entrada for igual a zero). 
			  Para cada valor lido imprima a sequ�ncia de 1 at� X, com um espa�o entre cada n�mero e seu sucessor.

@param: [n], inteiro, Numero de colunas.			 
@param: [j], inteiro, Numero a ser impresso e contador de linhas.

@return: inteiro, Para cada n�mero N do arquivo de entrada deve ser impressa uma linha de 1 at� N, conforme o exemplo abaixo. N�o deve haver espa�o em branco ap�s o �ltimo valor da linha.

/*/

/*Inicio da Fun��o*/
int main() {
	/*Declara��o das vari�veis*/
	int n = 0, j = 0;
	
	do{
		scanf("%d",&n);
	
		for(j = 1;j <= n;j++)
		{
			if(j == n)
			{
				printf("%d\n",j);							
			}
			else
			{
				printf("%d ",j);							
			}
		}
	}while(n != 0);
					
	/*Retorno da fun��o para o fim do programa*/
	return 0;
}
