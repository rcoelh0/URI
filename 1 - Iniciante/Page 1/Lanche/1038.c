#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*/
@type: Function - int main()
@title: Lanche

@author: Rafael Lima Coelho
@since: 27-06-2019
@version: RLC.1.0.URI

@description: Com base na tabela abaixo, escreva um programa que leia o c�digo de um item e a quantidade deste item. 
			  A seguir, calcule e mostre o valor da conta a pagar.
			  
			  CODIGO | ESPECIFICA��O                | PRE�O
			  1       Cachorro Quente				 R$ 4.00
			  2		  X-Salada						 R$ 4.50
			  3		  X-Bacon						 R$ 5.00
			  4		  Torrada Simples				 R$ 2.00
			  5		  Refrigerante   				 R$ 1.50
			  
@param: [nA], inteiro, Guarda o primeiro numero digitado pelo usu�rio.
@param: [nB], inteiro, Guarda o segundo numero digitado pelo usu�rio.

@return: caractere, O arquivo de sa�da deve conter a mensagem "Total: R$ " seguido pelo valor a ser pago, com 2 casas ap�s o ponto decimal.
/*/

/*Inicio da Fun��o*/
int main() {
	/*Declara��o das variaveis*/
	int nA = 0, nB = 0;
	
	/*Capturando valores digitados pelo usu�rio*/
	scanf("%d",&nA);
	scanf("%d",&nB);
	
	/*Verificando as condi��es do problema*/
	switch(nA)
	{
		case 1:
			printf("Total: R$ %.2lf\n", 4.00 * nB);
		break;
		case 2:
			printf("Total: R$ %.2lf\n", 4.50 * nB);
		break;
		case 3:
			printf("Total: R$ %.2lf\n", 5.00 * nB);
		break;
		case 4:
			printf("Total: R$ %.2lf\n", 2.00 * nB);
		break;
		case 5:
			printf("Total: R$ %.2lf\n", 1.50 * nB);
		break;
		default:
		break;
	}
		
	/*Retorno da fun��o para o fim do programa*/
	return 0;
}
