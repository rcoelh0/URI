#include <stdio.h>
#include <stdlib.h>

/*/
@type: Function - int main()
@title: Mês

@author: Rafael Lima Coelho
@since: 01-07-2019
@version: RLC.1.0.URI

@description: Leia um valor inteiro entre 1 e 12, inclusive. Correspondente a este valor, 
			  deve ser apresentado como resposta o mês do ano por extenso, em inglês, com a primeira letra maiúscula.
			 
@param: [nMes], inteiro, Guarda o primeiro numero digitado pelo usuário.

@return: caractere, Imprima por extenso o nome do mês correspondente ao número existente na entrada, com a primeira letra em maiúscula.
/*/

/*Inicio da Função*/
int main() {
	/*Declaração das variáveis*/
	int nMes = 0;
	
	/*Capturando valores digitados pelo usuário*/
	scanf("%d",&nMes);
	
	switch(nMes)
	{
		case 1:
			printf("January\n");	
			break;
		case 2:
			printf("February\n");	
			break;
		case 3:
			printf("March\n");	
			break;
		case 4:
			printf("April\n");	
			break;
		case 5:
			printf("May\n");	
			break;
		case 6:
			printf("June\n");	
			break;
		case 7:
			printf("July\n");	
			break;
		case 8:
			printf("August\n");	
			break;
		case 9:
			printf("September\n");	
			break;
		case 10:
			printf("October\n");	
			break;
		case 11:
			printf("November\n");	
			break;
		case 12:
			printf("December\n");	
			break;
		default:
			break;
	}
		
	/*Retorno da função para o fim do programa*/
	return 0;
}
