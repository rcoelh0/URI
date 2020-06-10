#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*/
@type: Function - int main()
@title: Preenchimento de Vetor III

@author: Rafael Lima Coelho
@since: 23-10-2019
@version: RLC.1.0.URI

@description: Leia um valor X. Coloque este valor na primeira posi��o de um vetor N[100]. 
			  Em cada posi��o subsequente de N (1 at� 99), coloque a metade do valor armazenado na posi��o anterior, 
			  conforme o exemplo abaixo. Imprima o vetor N.
			  A entrada contem um valor de dupla precis�o com 4 casas decimais.

@param: [i], inteiro, Contador e indice do vetor.			 
@param: [n], inteiro, Numero de posi��es.
@param: [aux], inteiro, Auxiliar para adicionar ao verto os valores de 0 at� n.
@param: [vet], inteiro, Vetor com o tamanho 1000.

@return: caractere, Para cada posi��o do vetor N, escreva "N[i] = Y", onde i � a posi��o do vetor e Y � o valor armazenado naquela posi��o. 
					Cada valor do vetor deve ser apresentado com 4 casas decimais.


/*/


/*Inicio da Fun��o*/
int main() {
	/*Declara��o das vari�veis*/
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
							
	/*Retorno da fun��o para o fim do programa*/
	return 0;
}
