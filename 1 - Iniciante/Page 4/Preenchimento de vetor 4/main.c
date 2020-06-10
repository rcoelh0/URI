#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*/
@type: Function - int main()
@title: Preenchimento de Vetor IV

@author: Rafael Lima Coelho
@since: 23-10-2019
@version: RLC.1.0.URI

@description: Neste problema você deverá ler 15 valores colocá-los em 2 vetores conforme estes valores forem pares ou ímpares. 
			  Só que o tamanho de cada um dos dois vetores é de 5 posições. Então, cada vez que um dos dois vetores encher, 
			  você deverá imprimir todo o vetor e utilizá-lo novamente para os próximos números que forem lidos. Terminada a leitura, 
			  deve-se imprimir o conteúdo que restou em cada um dos dois vetores, imprimindo primeiro os valores do vetor impar. 
			  Cada vetor pode ser preenchido tantas vezes quantas for necessário.
			  A entrada contém 15 números inteiros.

@param: [i], inteiro, Contador e indice do vetor impar.			 
@param: [j], inteiro, Contador e indice do vetor.			 
@param: [cont], inteiro, Contador tamanho 15.
@param: [p], inteiro, Contador e indice do vetor par.			 
@param: [n], inteiro, Valores inseridos pelo usuário.
@param: [par], inteiro, Vetor par.
@param: [imp], inteiro, Vetor impar.

@return: caractere, Imprima a saída conforme o exemplo


/*/


/*Inicio da Função*/
int main() {
	/*Declaração das variáveis*/
	int cont, p = 0, i = 0, j;
	int par[5],imp[5], n;
			
	//Atribuindo valores ao vetor				
	for(cont = 0; cont < 15; cont++)
	{
		scanf("%d",&n);
		
		if(n % 2 == 0)
		{
			par[p] = n;
			p++;
			
			if(p >= 5)
			{	//imprimindo valores pares
				for(p = 0; p < 5; p++)
				{
					printf("par[%d] = %d\n",p,par[p]);
				}
				p = 0;
			}
		}
		else
		{
			imp[i] = n;
			i++;
			
			if(i >= 5)
			{	//imprimindo valores impares
				for(i = 0; i < 5; i++)
				{
					printf("impar[%d] = %d\n",i,imp[i]);
				}
				i = 0;
			}
		}
	}
	
	//imprimindo restantes valores impares
	for(j = 0; j < i; j++)
	{
		printf("impar[%d] = %d\n",j,imp[j]);
	}
	
	//imprimindo restantes valores pares
	for(j = 0; j < p; j++)
	{
		printf("par[%d] = %d\n",j,par[j]);
	}
								
	/*Retorno da função para o fim do programa*/
	return 0;
}
