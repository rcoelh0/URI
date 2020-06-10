#include <stdio.h>
#include <stdlib.h>

/*/
@type: Function - int main()
@title: Sal�rio com B�nus

@author: Rafael Lima Coelho
@since: 10-06-2019
@version: RLC.1.0.URI

@description: Programa que le o nome de um vendedor, o seu sal�rio fixo e o total de vendas 
              efetuadas por ele no m�s (em dinheiro). Sabendo que este vendedor ganha 15% de comiss�o 
			  sobre suas vendas efetuadas, informar o total a receber no final do m�s, com duas casas decimais.
@param: [aNome], array, Guarda um array de caractere digitado pelo usu�rio.
@param: [nSal], double, Guarda o primeiro numero digitado pelo usu�rio.
@param: [nVend], double, Guarda o segundo numero digitado pelo usu�rio.
@param: [nTotal], double, Guarda a soma das vari�veis nSal + (nVend * 0.15).

@return: numerico, Imprimir o total que o funcion�rio dever� receber.
/*/

/*Define o tamanho do vetor*/
#define MAX_VETOR 99

/*Inicio da Fun��o*/
int main() {
	/*Declara��o das vari�veis*/
	char aNome[MAX_VETOR];
	double nVend = 0.00, nSal = 0.00, nTotal = 0.00;
	
	/*Capturando valores digitados pelo usu�rio*/
	scanf("%s",aNome);
	scanf("%lf",&nSal);
	scanf("%lf",&nVend);
	
	/*Calculando o valor do total*/	
	nTotal = nSal + (nVend * 0.15);
	
	/*Mostrando na tela o total*/
	printf("TOTAL = R$ %.2lf\n", nTotal);
	
	/*Retorno da fun��o para o fim do programa*/
	return 0;
}
