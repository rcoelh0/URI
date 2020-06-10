#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*/
@type: Function - int main()
@title: Numero Perfeito

@author: Rafael Lima Coelho
@since: 23-10-2019
@version: RLC.1.0.URI

@description: Na matemática, um número perfeito é um número inteiro para o qual a soma de todos os seus divisores positivos próprios (excluindo ele mesmo) é igual ao próprio número. 
			  Por exemplo o número 6 é perfeito, pois 1+2+3 é igual a 6. Sua tarefa é escrever um programa que imprima se um determinado número é perfeito ou não.

@param: [pA], inteiro, População da cidade A.			 
@param: [pB], inteiro, População da cidade B.
@param: [t], inteiro, Quantos testes seram realizados.	
@param: [i], inteiro, Contador numero de testes.
@param: [anos], inteiro, Quantidade em anos para a população de A ficar maior que a de B.
@param: [g1], double, Taxa de crescimento populacional da cidade A em decimal.
@param: [g2], double, Taxa de crescimento populacional da cidade B em decimal.

@return: caractere, Para cada caso de teste de entrada, imprima a mensagem “X eh perfeito” ou “X nao eh perfeito”, de acordo com a especificação fornecida.

/*/


/*Inicio da Função*/
int main() {
	/*Declaração das variáveis*/
	int i, num, t, aux = 0, j = 1;
	
	scanf("%d",&t);
	
	//Laço para repetição de acordo com o numero digitado pelo usuário				
	for(i = 0; i < t; i++)
	{
		scanf("%d",&num);
				
		while(j < num)
		{
			if(num % j == 0)
			{	
				aux += j;
			}
			j++;
		}
		if( aux == num)
		{
			printf("%d eh perfeito\n",num);	
		}
		else
		{
			printf("%d nao eh perfeito\n",num);	
		}
		
		aux = 0;
		j = 1;
	}
							
	/*Retorno da função para o fim do programa*/
	return 0;
}
