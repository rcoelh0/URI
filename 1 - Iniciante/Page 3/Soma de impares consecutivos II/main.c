#include <stdio.h>
#include <stdlib.h>

/*/
@type: Function - int main()
@title: Soma de impares consecutivos II

@author: Rafael Lima Coelho
@since: 16-10-2019
@version: RLC.1.0.URI

@description: Leia um valor inteiro N que é a quantidade de casos de teste que vem a seguir. 
   			  Cada caso de teste consiste de dois inteiros X e Y. 
			  Você deve apresentar a soma de todos os ímpares existentes entre X e Y.

@param: [n], inteiro, Numero de numeros a ser inserido.			 
@param: [i], inteiro, Contador que auxilia a somatoria dos numeros impares.
@param: [x], inteiro, Primeiro numero inserido.
@param: [y], inteiro, Segundo numero inserido.
@param: [soma], inteiro, Contador dois em dois.

@return: inteiro, Imprima a soma de todos valores ímpares entre X e Y.
/*/

/*Inicio da Função*/
int main() {
	/*Declaração das variáveis*/
	int n, x, y,i;
	
	scanf("%d",&n);
	
	int soma[n];
			
	for(i = 0;i < n; i++)
	{
		scanf("%d %d",&x,&y);
		soma[i] = 0;
		
		/*Verificando se o x e maior que y e verificando se a diferenca entre os dois e de 2 numeros*/
		if((x-1) > y)
		{
			/*Eliminando o primeiro numero*/
			y++;
			
			/*Somando os numeros impares entre x e y*/
			while(y < x)
			{
				/*Procurando numeros impares*/
				if(y % 2 != 0)
				{
					soma[i] += y;		
				}
				
				/*Eliminando o ultimo numero*/				
				y++;
			}
		}
		
		/*Verificando se o y e maior que x e verificando se a diferenca entre os dois e de 2 numeros*/
		else if((y - 1) > x)
		{
			/*Eliminando o primeiro numero*/
			x++;
			
			/*Somando os numeros impares entre x e y*/
			while(x < y)
			{
				/*Procurando numeros impares*/
				if(x % 2 != 0)
				{
					soma[i] += x;		
				}
				
				/*Eliminando o ultimo numero*/
				x++;
			}
		}	
	}
	
	/*Imprimindo o vetor com a somatoria dos numeros impares*/
	for(i = 0;i < n; i++)
	{	
		printf("%d\n",soma[i]);	
	}
	
	/*Retorno da função para o fim do programa*/
	return 0;
}
