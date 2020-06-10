#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*/
@type: Function - int main()
@title: Sequencia logica

@author: Rafael Lima Coelho
@since: 20-10-2019
@version: RLC.1.0.URI

@description: Escreva um programa que leia um valor inteiro N. N * 2 linhas de sa�da ser�o apresentadas na execu��o do programa, seguindo a l�gica do exemplo. 
			  Para valores com mais de 6 d�gitos, todos os d�gitos devem ser apresentados.

@param: [n], inteiro, Numero de entrada.			 
@param: [i], inteiro, Resultado e conta o numero de linhas.

@return: inteiro, Imprima a sa�da conforme o exemplo fornecido.

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
		
		printf("%d %d %d\n",i,(i*i)+1,(i*i*i)+1);					
	}
					
	/*Retorno da fun��o para o fim do programa*/
	return 0;
}
