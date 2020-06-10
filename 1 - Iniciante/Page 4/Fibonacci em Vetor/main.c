#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*/
@type: Function - int main()
@title: Fibonacci em Vetor

@author: Rafael Lima Coelho
@since: 23-10-2019
@version: RLC.1.0.URI

@description: Faça um programa que leia um valor e apresente o número de Fibonacci correspondente a este valor lido. 
			  Lembre que os 2 primeiros elementos da série de Fibonacci são 0 e 1 e cada próximo termo é a soma dos 2 anteriores a ele. 
			  Todos os valores de Fibonacci calculados neste problema devem caber em um inteiro de 64 bits sem sinal.

@param: [i], inteiro, Contador e indice do vetor.			 
@param: [n], inteiro, Numero de posições a serem escolhidas.
@param: [pos], inteiro, Posição a ser escolhida.
@param: [vet], inteiro(64), Vetor com a sequencia fibonacci.
@param: [ant], inteiro(64), Auxiliar que guarta a valor anterior.
@param: [ant2], inteiro(64), Auxiliar que guarda o valor anterior do anterior.

@return: caractere, Para cada caso de teste da entrada, imprima a mensagem "Fib(N) = X", onde X é o N-ésimo termo da série de Fibonacci.


/*/


/*Inicio da Função*/
int main() {
	/*Declaração das variáveis*/
	int i, n, pos;
	long long int vet[60], ant, ant2;
	
	vet[0] = 0;
	vet[1] = 1;
	ant = 0;
	ant2 = 1;
	
	//Atribuindo valores ao vetor				
	for(i = 2; i < 60; i++)
	{	
		vet[i] = ant + ant2;
		ant = ant2;
		ant2 = vet[i];	
	}
	
	scanf("%d",&n);
	
	//imprimindo valores
	for(i = 0; i < n; i++)
	{
		scanf("%d",&pos);	
		printf("Fib(%d) = %lld\n",pos,vet[pos]);			
	}
							
	/*Retorno da função para o fim do programa*/
	return 0;
}
