#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*/
@type: Function - int main()
@title: quadrado e ao cubo

@author: Rafael Lima Coelho
@since: 20-10-2019
@version: RLC.1.0.URI

@description: Escreva um programa que leia um valor inteiro N (1 < N < 1000). Este N � a quantidade de linhas de sa�da que ser�o apresentadas na execu��o do programa.

@param: [n], inteiro, Numero de entrada.			 
@param: [i], inteiro, Resultado e conta o numero de linhas.

@return: caractere, Imprima a sa�da conforme o exemplo fornecido.

/*/

/*Inicio da Fun��o*/
int main() {
	/*Declara��o das vari�veis*/
	int n = 0, i = 0;
	
	scanf("%d",&n);
	
	while(i < n)
	{
		i++;
		printf("%d %d %d\n",i,i*i,i*i*i);				
	}
					
	/*Retorno da fun��o para o fim do programa*/
	return 0;
}
