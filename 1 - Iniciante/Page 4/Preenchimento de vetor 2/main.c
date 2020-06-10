#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*/
@type: Function - int main()
@title: Preenchimento de Vetor II

@author: Rafael Lima Coelho
@since: 23-10-2019
@version: RLC.1.0.URI

@description: Faça um programa que leia um valor T e preencha um vetor N[1000] com a sequência de valores de 0 até T-1 repetidas vezes, 
			  conforme exemplo abaixo. Imprima o vetor N.

@param: [i], inteiro, Contador e indice do vetor.			 
@param: [n], inteiro, Numero de posições.
@param: [aux], inteiro, Auxiliar para adicionar ao verto os valores de 0 até n.
@param: [vet], inteiro, Vetor com o tamanho 1000.

@return: caractere, Para cada posição do vetor, escreva "N[i] = x", onde i é a posição do vetor e x é o valor armazenado naquela posição.


/*/


/*Inicio da Função*/
int main() {
	/*Declaração das variáveis*/
	int i, n, aux = 0;
	int vet[1000];
	
	scanf("%d",&n);
		
	//Atribuindo valores ao vetor				
	for(i = 0; i < 1000; i++)
	{
		if(aux < n)
		{
			vet[i] = aux;
			aux++;
		}
		else
		{
			aux = 0;
			vet[i] = aux;
			aux++;
		}	
	}
	
	//imprimindo valores
	for(i = 0; i < 1000; i++)
	{	
		printf("N[%d] = %d\n",i,vet[i]);			
	}
							
	/*Retorno da função para o fim do programa*/
	return 0;
}
