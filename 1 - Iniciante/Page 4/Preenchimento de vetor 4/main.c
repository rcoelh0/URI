#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*/
@type: Function - int main()
@title: Preenchimento de Vetor IV

@author: Rafael Lima Coelho
@since: 23-10-2019
@version: RLC.1.0.URI

@description: Neste problema voc� dever� ler 15 valores coloc�-los em 2 vetores conforme estes valores forem pares ou �mpares. 
			  S� que o tamanho de cada um dos dois vetores � de 5 posi��es. Ent�o, cada vez que um dos dois vetores encher, 
			  voc� dever� imprimir todo o vetor e utiliz�-lo novamente para os pr�ximos n�meros que forem lidos. Terminada a leitura, 
			  deve-se imprimir o conte�do que restou em cada um dos dois vetores, imprimindo primeiro os valores do vetor impar. 
			  Cada vetor pode ser preenchido tantas vezes quantas for necess�rio.
			  A entrada cont�m 15 n�meros inteiros.

@param: [i], inteiro, Contador e indice do vetor impar.			 
@param: [j], inteiro, Contador e indice do vetor.			 
@param: [cont], inteiro, Contador tamanho 15.
@param: [p], inteiro, Contador e indice do vetor par.			 
@param: [n], inteiro, Valores inseridos pelo usu�rio.
@param: [par], inteiro, Vetor par.
@param: [imp], inteiro, Vetor impar.

@return: caractere, Imprima a sa�da conforme o exemplo


/*/


/*Inicio da Fun��o*/
int main() {
	/*Declara��o das vari�veis*/
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
								
	/*Retorno da fun��o para o fim do programa*/
	return 0;
}
