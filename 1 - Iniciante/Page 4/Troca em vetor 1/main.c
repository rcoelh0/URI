#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*/
@type: Function - int main()
@title: Troca em Vetor I

@author: Rafael Lima Coelho
@since: 23-10-2019
@version: RLC.1.0.URI

@description: Fa�a um programa que leia um vetor N[20]. Troque a seguir, o primeiro elemento com o �ltimo, o segundo elemento com o pen�ltimo, etc., 
			  at� trocar o 10� com o 11�. Mostre o vetor modificado.
			  A entrada cont�m 20 valores inteiros, positivos ou negativos.

@param: [i], inteiro, Contador e indice do vetor.			 
@param: [vet], inteiro, Vetor com os numeros digitados pelo usuairo.

@return: caractere, Para cada posi��o do vetor N, escreva "N[i] = Y", onde i � a posi��o do vetor e Y � o valor armazenado naquela posi��o.


/*/


/*Inicio da Fun��o*/
int main() {
	/*Declara��o das vari�veis*/
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
							
	/*Retorno da fun��o para o fim do programa*/
	return 0;
}
