#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*/
@type: Function - int main()
@title: Menor e Posi��o

@author: Rafael Lima Coelho
@since: 23-10-2019
@version: RLC.1.0.URI

@description: Fa�a um programa que leia um valor N. Este N ser� o tamanho de um vetor X[N]. 
			  A seguir, leia cada um dos valores de X, encontre o menor elemento deste vetor e a sua posi��o dentro do vetor, mostrando esta informa��o.
		 
@param: [cont], inteiro, Contador.			 
@param: [n], inteiro, Tamanho do vetor.
@param: [val], inteiro, Valores inseridos pelo usu�rio.
@param: [meno], inteiro, Valor menor.
@param: [ind], inteiro, Indice do valor menor.
@param: [vet], inteiro, Vetor.

@return: caractere, A primeira linha apresenta a mensagem �Menor valor:� seguida de um espa�o e do menor valor lido na entrada. 
					A segunda linha apresenta a mensagem �Posicao:� seguido de um espa�o e da posi��o do vetor na qual se encontra o menor valor lido, 
					lembrando que o vetor inicia na posi��o zero.
/*/


/*Inicio da Fun��o*/
int main() {
	/*Declara��o das vari�veis*/
	int cont, n, val, ind;
	
	scanf("%d",&n);
	
	int vet[n];
			
	//Atribuindo valores ao vetor				
	for(cont = 0; cont < n; cont++)
	{
		scanf("%d",&val);
		vet[cont] = val;		
	}
	
	val = vet[0];
	
	//imprimindo valores
	for(cont = 0; cont < n; cont++)
	{
		if(vet[cont] < val)
		{
			val = vet[cont];
			ind = cont;
		}
	}
	
	printf("Menor valor: %d\n",val);
	printf("Posicao: %d\n",ind);
								
	/*Retorno da fun��o para o fim do programa*/
	return 0;
}
