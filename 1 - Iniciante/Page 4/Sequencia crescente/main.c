#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*/
@type: Function - int main()
@title: Sequencia crescente

@author: Rafael Lima Coelho
@since: 20-10-2019
@version: RLC.1.0.URI

@description: Este programa deve ler uma variável inteira X inúmeras vezes (deve parar quando o valor no arquivo de entrada for igual a zero). 
			  Para cada valor lido imprima a sequência de 1 até X, com um espaço entre cada número e seu sucessor.

@param: [n], inteiro, Numero de colunas.			 
@param: [j], inteiro, Numero a ser impresso e contador de linhas.

@return: inteiro, Para cada número N do arquivo de entrada deve ser impressa uma linha de 1 até N, conforme o exemplo abaixo. Não deve haver espaço em branco após o último valor da linha.

/*/

/*Inicio da Função*/
int main() {
	/*Declaração das variáveis*/
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
					
	/*Retorno da função para o fim do programa*/
	return 0;
}
