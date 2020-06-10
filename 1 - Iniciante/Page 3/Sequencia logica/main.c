#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*/
@type: Function - int main()
@title: Sequencia logica

@author: Rafael Lima Coelho
@since: 20-10-2019
@version: RLC.1.0.URI

@description: Escreva um programa que leia um valor inteiro N. N * 2 linhas de saída serão apresentadas na execução do programa, seguindo a lógica do exemplo. 
			  Para valores com mais de 6 dígitos, todos os dígitos devem ser apresentados.

@param: [n], inteiro, Numero de entrada.			 
@param: [i], inteiro, Resultado e conta o numero de linhas.

@return: inteiro, Imprima a saída conforme o exemplo fornecido.

/*/

/*Inicio da Função*/
int main() {
	/*Declaração das variáveis*/
	int n = 0, i = 0;
	
	scanf("%d",&n);
	
	while(i < n)
	{
		i++;
		
		printf("%d %d %d\n",i,i*i,i*i*i);					
		
		printf("%d %d %d\n",i,(i*i)+1,(i*i*i)+1);					
	}
					
	/*Retorno da função para o fim do programa*/
	return 0;
}
