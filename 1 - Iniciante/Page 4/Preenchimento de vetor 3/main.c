#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*/
@type: Function - int main()
@title: Preenchimento de Vetor III

@author: Rafael Lima Coelho
@since: 23-10-2019
@version: RLC.1.0.URI

@description: Leia um valor X. Coloque este valor na primeira posição de um vetor N[100]. 
			  Em cada posição subsequente de N (1 até 99), coloque a metade do valor armazenado na posição anterior, 
			  conforme o exemplo abaixo. Imprima o vetor N.
			  A entrada contem um valor de dupla precisão com 4 casas decimais.

@param: [i], inteiro, Contador e indice do vetor.			 
@param: [n], inteiro, Numero de posições.
@param: [aux], inteiro, Auxiliar para adicionar ao verto os valores de 0 até n.
@param: [vet], inteiro, Vetor com o tamanho 1000.

@return: caractere, Para cada posição do vetor N, escreva "N[i] = Y", onde i é a posição do vetor e Y é o valor armazenado naquela posição. 
					Cada valor do vetor deve ser apresentado com 4 casas decimais.


/*/


/*Inicio da Função*/
int main() {
	/*Declaração das variáveis*/
	int i;
	double vet[100], n;
	
	scanf("%lf",&n);
	
	vet[0] = n;
		
	//Atribuindo valores ao vetor				
	for(i = 1; i < 100; i++)
	{
		vet[i] = vet[i-1]/2;	
	}
	
	//imprimindo valores
	for(i = 0; i < 100; i++)
	{	
		printf("N[%d] = %.4lf\n",i,vet[i]);			
	}
							
	/*Retorno da função para o fim do programa*/
	return 0;
}
