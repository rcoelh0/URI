#include <stdio.h>
#include <stdlib.h>

/*/
@type: Function - int main()
@title: Sequencia de numeros e soma

@author: Rafael Lima Coelho
@since: 16-10-2019
@version: RLC.1.0.URI

@description: Leia um conjunto não determinado de pares de valores M e N (parar quando algum dos valores for menor ou igual a zero). 
			  Para cada par lido, mostre a sequência do menor até o maior e a soma dos inteiros consecutivos entre eles (incluindo o N e M).

@param: [n], inteiro, Tamanho do vetor da soma.			 
@param: [i], inteiro, Contador que auxilia a somatoria dos numeros.
@param: [j], inteiro, Contador que auxilia a somatoria dos numeros.
@param: [x], inteiro, Primeiro numero inserido.
@param: [y], inteiro, Segundo numero inserido.
@param: [soma], vetor, Soma da sequencia dos numeros inseridos.
@param: [seq], vetor, Sequencia dos numeros inseridos.
@param: [tamJ], vetor, Tamanho do vetor seq.

@return: caractere, Para cada dupla de valores, imprima a sequência do menor até o maior e a soma deles, conforme exemplo abaixo.
/*/

/*Inicio da Função*/
int main() {
	/*Declaração das variáveis*/
	int n = 0, x = 1, y = 1, i = 0, j = 0;	
	int soma[100], seq[100][100], tamJ[100];
	
	/*Laco de repeticao infinito*/		
	while(1)
	{
		scanf("%d %d",&x,&y);
		
		tamJ[i] = 0;
		soma[i] = 0;
		
		/*Condição de parada do laco de repeticao*/
		if(x <= 0 || y <= 0)
		{
			break;
		}
		
		if(x > y)
		{	
			/*Somando os numeros entre x e y*/
			while(y <= x)
			{
				seq[i][j] = y;
							
				soma[i] += y;
				
				tamJ[i] += 1;
				y++;
				j++;		
			}
		}
		else if(y > x)
		{		
			/*Somando os numeros entre x e y*/
			while(x <= y)
			{
				seq[i][j] = x;
				
				soma[i] += x;	
				
				tamJ[i] += 1;
				
				x++;		
				j++;
			}
		}
		else
		{
			seq[i][j] = x;
			
			tamJ[i] += 1;
			soma[i] = x;
		}
		i++;
		j = 0;
		n++;	
	}
	
	/*Imprimindo o vetor com a somatoria dos numeros impares*/
	for(i = 0;i < n; i++)
	{
		j = 0;
		while(j < tamJ[i])
		{
			printf("%d ",seq[i][j]);	
			j++;
		}	
		printf("Sum=%d\n",soma[i]);	
	}
	
	/*Retorno da função para o fim do programa*/
	return 0;
}
