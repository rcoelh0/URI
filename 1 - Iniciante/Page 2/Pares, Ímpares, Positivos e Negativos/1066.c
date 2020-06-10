#include <stdio.h>
#include <stdlib.h>

/*/
@type: Function - int main()
@title: Pares, Ímpares, Positivos e Negativos

@author: Rafael Lima Coelho
@since: 09-08-2019
@version: RLC.1.0.URI

@description: Leia 5 valores Inteiros. 
              A seguir mostre quantos valores digitados foram pares, quantos valores digitados foram ímpares, 
			  quantos valores digitados foram positivos e quantos valores digitados foram negativos.
			 
@param: [nVal],    inteiro, Valor digitado pelo usuário.
@param: [nPar],    inteiro, Quantidade de valores pares.
@param: [nImpar],  inteiro, Quantidade de valores impares.
@param: [nPosi],   inteiro, Quantidade de valores positivos.
@param: [nNeg],    inteiro, Quantidade de valores negativos.
@param: [nI],      inteiro, Contador do laço de repetição For.

@return: caractere, Imprima a mensagem conforme o exemplo fornecido, uma mensagem por linha, não esquecendo o final de linha após cada uma.
/*/

/*Inicio da Função*/
int main() {
	/*Declaração das variáveis*/
	int nPar = 0, nPosi = 0, nImpar = 0, nNega = 0, nI, nVal = 0;
	
	for(nI = 1;nI <= 5; nI++)
	{
		scanf("%d",&nVal);
		
		if((nVal % 2) == 0)
		{	
			nPar++;
		}
		else
		{
			nImpar++;	
		}
		
		if(nVal > 0)
		{
			nPosi++;
		}
		
		if(nVal < 0)
		{
			nNega++;
		}			
	}
		
	printf("%d valor(es) par(es)\n",nPar);	
	printf("%d valor(es) impar(es)\n",nImpar);
	printf("%d valor(es) positivo(s)\n",nPosi);
	printf("%d valor(es) negativo(s)\n",nNega);
		
	/*Retorno da função para o fim do programa*/
	return 0;
}
