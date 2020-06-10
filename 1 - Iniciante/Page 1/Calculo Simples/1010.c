#include <stdio.h>
#include <stdlib.h>

/*/
@type: Function - int main()
@title: Cálculo Simples

@author: Rafael Lima Coelho
@since: 10-06-2019
@version: RLC.1.0.URI

@description: Eeste Programa le o código de uma peça 1, o número de peças 1, o valor unitário de cada peça 1, 
		      o código de uma peça 2, o número de peças 2 e o valor unitário de cada peça 2. 
@param: [nCont], inteiro, Guarda um numero auxiliar para execução do for. É um contador.		      
@param: [nCod], inteiro, Guarda o primeiro numero digitado pelo usuário.
@param: [nNum], inteiro, Guarda o segundo numero digitado pelo usuário.
@param: [nVal], double, Guarda o terceiro numero digitado pelo usuário.
@param: [nTotal], double, Guarda a soma das variáveis nTotal += (nNum * nVal) em um laço de repetição.

@return: numerico, mostra o valor a ser pago nas peças.
/*/

/*Inicio da Função*/
int main() {
	/*Declaração das variáveis*/
	int nCod = 0, nNum = 0, nCont;
	double nVal = 0.00, nTotal = 0.00;
	
	/*Laço de repetição 'for', utilizado para executar as linhas 31 a 39 duas vezes*/
	for(nCont = 1;nCont <= 2;nCont++)
	{
		/*Capturando valores digitados pelo usuário*/
		scanf("%d",&nCod);
		scanf("%d",&nNum);
		scanf("%lf",&nVal);
		
		/*Calculando o valor do total*/	
		nTotal += (nNum * nVal);
	}
		
	/*Mostrando na tela o total*/
	printf("VALOR A PAGAR: R$ %.2lf\n", nTotal);
	
	/*Retorno da função para o fim do programa*/
	return 0;
}
