#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*/
@type: Function - int main()
@title: PUM

@author: Rafael Lima Coelho
@since: 20-10-2019
@version: RLC.1.0.URI

@description: Escreva um programa que leia um valor inteiro N. Este N é a quantidade de linhas de saída que serão apresentadas na execução do programa.

@param: [n], inteiro, Numero de entrada.			 
@param: [i], inteiro, Resultado.
@param: [aux], inteiro, Contador de linhas.

@return: caractere, Imprima a saída conforme o exemplo fornecido.

/*/

/*Inicio da Função*/
int main() {
	/*Declaração das variáveis*/
	int n = 0, i = 1, aux = 0;
	
	scanf("%d",&n);
	
	while(aux < n)
	{
		if(i == 1)
		{
			printf("%d %d %d PUM\n",i,i+1,i+2);				
		}
		else 
		{
			i++;
			printf("%d %d %d PUM\n",i,i+1,i+2);				
		}
		aux++;
		i += 3;
	}
					
	/*Retorno da função para o fim do programa*/
	return 0;
}
