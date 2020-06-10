#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*/
@type: Function - int main()
@title: Preenchimento de Vetor I

@author: Rafael Lima Coelho
@since: 23-10-2019
@version: RLC.1.0.URI

@description: Leia um valor e faça um programa que coloque o valor lido na primeira posição de um vetor N[10]. 
			  Em cada posição subsequente, coloque o dobro do valor da posição anterior. 
			  Por exemplo, se o valor lido for 1, os valores do vetor devem ser 1,2,4,8 e assim sucessivamente. Mostre o vetor em seguida.

@param: [i], inteiro, Contador e indice do vetor.			 
@param: [vet], inteiro, Vetor com os numeros digitados pelo usuairo.

@return: caractere, Para cada posição do vetor, escreva "N[i] = X", onde i é a posição do vetor e X é o valor armazenado na posição i. 
					O primeiro número do vetor N (N[0]) irá receber o valor de V.

/*/


/*Inicio da Função*/
int main() {
	/*Declaração das variáveis*/
	int i, pri;
	int vet[10];
	
	scanf("%d",&vet[0]);
		
	//Atribuindo valores ao vetor				
	for(i = 1; i < 10; i++)
	{			
		vet[i] = vet[i-1]*2;	
	}
	
	//Imprimindo o vetor
	for(i = 0; i < 10; i++)
	{
		printf("N[%d] = %d\n",i,vet[i]);
	}
							
	/*Retorno da função para o fim do programa*/
	return 0;
}
