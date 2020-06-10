#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*/
@type: Function - int main()
@title: Troca em Vetor I

@author: Rafael Lima Coelho
@since: 23-10-2019
@version: RLC.1.0.URI

@description: Faça um programa que leia um vetor N[20]. Troque a seguir, o primeiro elemento com o último, o segundo elemento com o penúltimo, etc., 
			  até trocar o 10º com o 11º. Mostre o vetor modificado.
			  A entrada contém 20 valores inteiros, positivos ou negativos.

@param: [i], inteiro, Contador e indice do vetor.			 
@param: [vet], inteiro, Vetor com os numeros digitados pelo usuairo.

@return: caractere, Para cada posição do vetor N, escreva "N[i] = Y", onde i é a posição do vetor e Y é o valor armazenado naquela posição.


/*/


/*Inicio da Função*/
int main() {
	/*Declaração das variáveis*/
	int i, aux;
	int vet[20];
			
	//Atribuindo valores ao vetor				
	for(i = 0; i < 20; i++)
	{	
		scanf("%d",&vet[i]);			
	}
	
	//Invertendo valores
	for(i = 0; i < 10; i++)
	{
		aux = vet[i];
		vet[i] = vet[19 - i];
		vet[19 - i] = aux;	
	}
	
	//imprimindo valores
	for(i = 0; i < 20; i++)
	{	
		printf("N[%d] = %d\n",i,vet[i]);			
	}
							
	/*Retorno da função para o fim do programa*/
	return 0;
}
