#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*/
@type: Function - int main()
@title: Seleçao em Vetor I

@author: Rafael Lima Coelho
@since: 23-10-2019
@version: RLC.1.0.URI

@description: Faça um programa que leia um vetor A[100]. 
			  No final, mostre todas as posições do vetor que armazenam um valor menor ou igual a 10 e o valor armazenado em cada uma das posições.

@param: [i], inteiro, Contador e indice do vetor.			 
@param: [vet], inteiro, Vetor com os numeros digitados pelo usuairo.

@return: caractere, Para cada valor do vetor menor ou igual a 10, escreva "A[i] = x", 
					onde i é a posição do vetor e x é o valor armazenado na posição, com uma casa após o ponto decimal.


/*/


/*Inicio da Função*/
int main() {
	/*Declaração das variáveis*/
	int i;
	double vet[100];
			
	//Atribuindo valores ao vetor				
	for(i = 0; i < 100; i++)
	{	
		scanf("%lf",&vet[i]);			
	}
	
	//Imprimindo o vetor
	for(i = 0; i < 100; i++)
	{
		if(vet[i] <= 10)
		{
			printf("A[%d] = %.1lf\n",i,vet[i]);	
		}
	}
							
	/*Retorno da função para o fim do programa*/
	return 0;
}
