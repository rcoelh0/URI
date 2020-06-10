#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*/
@type: Function - int main()
@title: Crescimento Populacional

@author: Rafael Lima Coelho
@since: 23-10-2019
@version: RLC.1.0.URI

@description: 

@param: [pA], inteiro, População da cidade A.			 
@param: [pB], inteiro, População da cidade B.
@param: [t], inteiro, Quantos testes seram realizados.	
@param: [i], inteiro, Contador numero de testes.
@param: [anos], inteiro, Quantidade em anos para a população de A ficar maior que a de B.
@param: [g1], double, Taxa de crescimento populacional da cidade A em decimal.
@param: [g2], double, Taxa de crescimento populacional da cidade B em decimal.

@return: caractere, Imprima, para cada caso de teste, quantos anos levará para que a cidade A ultrapasse a cidade B em número de habitantes.

/*/


/*Inicio da Função*/
int main() {
	/*Declaração das variáveis*/
	int pA, pB, t, i, anos = 0;
	double g1, g2;
	
	scanf("%d",&t);
	
	//Laço para repetição de acordo com o numero digitado pelo usuário				
	for(i = 0; i < t; i++)
	{
		scanf("%d %d %lf %lf",&pA, &pB, &g1, &g2);
		
		//O exercicio exige que se ultrapassar 100 anos a contagem deveria parar ou quando pA ficar maior que pB
		while(pA <= pB && anos <= 100)
		{
			//Como se fosse juros composto. Esta linha soma o valor de pA com o resultado da conta de (pA *g1)/100.
			pA += ((pA * g1)/100); 
			
			//Quando pB for zero devemos manter o valor de pB e almentar só pA.
			if(pB > 0)
			{
				pB += ((pB * g2)/100);	
			}
			//cada incremento equivale a 1 ano.
			anos++;
		//	printf("%d -- PA: %d, PB: %d\n",anos,pA,pB);
		}
		
		if( anos > 100)
		{
			printf("Mais de 1 seculo.\n");	
		}
		else
		{
			printf("%d anos.\n",anos);	
		}
		
		anos = 0;
	}
							
	/*Retorno da função para o fim do programa*/
	return 0;
}
