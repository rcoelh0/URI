#include <stdio.h>
#include <stdlib.h>

/*/
@type: Function - int main()
@title: Salário com Bônus

@author: Rafael Lima Coelho
@since: 10-06-2019
@version: RLC.1.0.URI

@description: Programa que le o nome de um vendedor, o seu salário fixo e o total de vendas 
              efetuadas por ele no mês (em dinheiro). Sabendo que este vendedor ganha 15% de comissão 
			  sobre suas vendas efetuadas, informar o total a receber no final do mês, com duas casas decimais.
@param: [aNome], array, Guarda um array de caractere digitado pelo usuário.
@param: [nSal], double, Guarda o primeiro numero digitado pelo usuário.
@param: [nVend], double, Guarda o segundo numero digitado pelo usuário.
@param: [nTotal], double, Guarda a soma das variáveis nSal + (nVend * 0.15).

@return: numerico, Imprimir o total que o funcionário deverá receber.
/*/

/*Define o tamanho do vetor*/
#define MAX_VETOR 99

/*Inicio da Função*/
int main() {
	/*Declaração das variáveis*/
	char aNome[MAX_VETOR];
	double nVend = 0.00, nSal = 0.00, nTotal = 0.00;
	
	/*Capturando valores digitados pelo usuário*/
	scanf("%s",aNome);
	scanf("%lf",&nSal);
	scanf("%lf",&nVend);
	
	/*Calculando o valor do total*/	
	nTotal = nSal + (nVend * 0.15);
	
	/*Mostrando na tela o total*/
	printf("TOTAL = R$ %.2lf\n", nTotal);
	
	/*Retorno da função para o fim do programa*/
	return 0;
}
