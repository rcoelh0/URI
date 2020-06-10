#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*/
@type: Function - int main()
@title: Substitui��o em Vetor I

@author: Rafael Lima Coelho
@since: 23-10-2019
@version: RLC.1.0.URI

@description: Fa�a um programa que leia um vetor X[10]. Substitua a seguir, todos os valores nulos e negativos do vetor X por 1. Em seguida mostre o vetor X.

@param: [i], inteiro, Contador e indice do vetor.			 
@param: [vet], inteiro, Vetor com os numeros digitados pelo usuairo.

@return: caractere, Para cada posi��o do vetor, escreva "X[i] = x", onde i � a posi��o do vetor e x � o valor armazenado naquela posi��o.

/*/


/*Inicio da Fun��o*/
int main() {
	/*Declara��o das vari�veis*/
	int i;
	int vet[10];
		
	//Atribuindo valores ao vetor				
	for(i = 0; i < 10; i++)
	{
		scanf("%d",&vet[i]);
				
		if( vet[i] <= 0)
		{
			vet[i] = 1;
		}
	}
	
	//Imprimindo o vetor
	for(i = 0; i < 10; i++)
	{
		printf("X[%d] = %d\n",i,vet[i]);
	}
							
	/*Retorno da fun��o para o fim do programa*/
	return 0;
}
