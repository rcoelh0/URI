#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*/
@type: Function - int main()
@title: Somando Inteiros Consecutivos

@author: Rafael Lima Coelho
@since: 20-10-2019
@version: RLC.1.0.URI

@description: Faça um algoritmo para ler um valor A e um valor N. Imprimir a soma de A para cada i com os valores (0 <= i <= N-1). 
			  Enquanto N for negativo ou ZERO, um novo N(apenas N) deve ser lido.
			  A entrada contém somente valores inteiros, podendo ser positivos ou negativos. Todos os valores estão na mesma linha.

@param: [a], inteiro, Primeiro numero inserido.			 
@param: [n], inteiro, Numero a ser somado em a.
@param: [s], inteiro, Soma.	
@param: [i], inteiro, Contador numero de vezes que n será somado em a.

@return: inteiro, A saída contém apenas um valor inteiro.

/*/

/*Inicio da Função*/
int main() {
	/*Declaração das variáveis*/
	int n = 0, i = 1, a = 0, s = 0;
	
	scanf("%d %d",&a,&n);
	s = a;
	
	while(n <= 0)
	{
		scanf("%d",&n);
	}
	
	while(i < n)
	{		
		s += a + i;						
		i++;	
	}
	
	printf("%d\n",s);
				
	/*Retorno da função para o fim do programa*/
	return 0;
}
