#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*/
@type: Function - int main()
@title: Ultrapassando Z

@author: Rafael Lima Coelho
@since: 20-10-2019
@version: RLC.1.0.URI

@description: Faça um programa que leia dois inteiros: X e Z (devem ser lidos tantos valores para Z quantos necessários, até que seja digitado um valor maior do que X para ele). 
			  Conte quantos números inteiros devem ser somados em sequência (considerando o X nesta soma) para que a soma ultrapasse a Z o mínimo possível. Escreva o valor final da contagem.

			  A entrada pode conter, por exemplo, os valores 21 21 15 30. Neste caso, é então assumido o valor 21 para X enquanto os valores 21 e 15 devem ser desconsiderados 
			  pois são menores ou iguais a X. Como o valor 30 está dentro da especificação (maior do que X) ele será válido e então deve-se processar os cálculos para apresentar 
			  na saída o valor 2, pois é a quantidade de valores somados para se produzir um valor maior do que 30 (21 + 22).

@param: [a], inteiro, Primeiro numero inserido.			 
@param: [b], inteiro, Segundo numero inserido.
@param: [s], inteiro, Soma.	
@param: [i], inteiro, Contador numero de vezes que n será somado em a.

@return: inteiro, Imprima uma linha com um número inteiro que representa a quantidade de números inteiros que devem ser somadas, de acordo com a especificação acima.

/*/

/*Inicio da Função*/
int main() {
	/*Declaração das variáveis*/
	int b = 0, i = 0, a = 0, s = 0;
	
	scanf("%d %d",&a,&b);
	
	while(b <= a)
	{
		scanf("%d",&b);
	}
	
	while(s <= b)
	{		
		s += a;
		a++;						
		i++;	
	}
	
	printf("%d\n",i);
				
	/*Retorno da função para o fim do programa*/
	return 0;
}
