#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*/
@type: Function - int main()
@title: Sele�ao em Vetor I

@author: Rafael Lima Coelho
@since: 23-10-2019
@version: RLC.1.0.URI

@description: Fa�a um programa que leia um vetor A[100]. 
			  No final, mostre todas as posi��es do vetor que armazenam um valor menor ou igual a 10 e o valor armazenado em cada uma das posi��es.

@param: [i], inteiro, Contador e indice do vetor.			 
@param: [vet], inteiro, Vetor com os numeros digitados pelo usuairo.

@return: caractere, Para cada valor do vetor menor ou igual a 10, escreva "A[i] = x", 
					onde i � a posi��o do vetor e x � o valor armazenado na posi��o, com uma casa ap�s o ponto decimal.


/*/


/*Inicio da Fun��o*/
int main() {
	/*Declara��o das vari�veis*/
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
							
	/*Retorno da fun��o para o fim do programa*/
	return 0;
}
