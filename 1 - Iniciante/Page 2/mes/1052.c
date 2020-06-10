#include <stdio.h>
#include <stdlib.h>

/*/
@type: Function - int main()
@title: M�s

@author: Rafael Lima Coelho
@since: 01-07-2019
@version: RLC.1.0.URI

@description: Leia um valor inteiro entre 1 e 12, inclusive. Correspondente a este valor, 
			  deve ser apresentado como resposta o m�s do ano por extenso, em ingl�s, com a primeira letra mai�scula.
			 
@param: [nMes], inteiro, Guarda o primeiro numero digitado pelo usu�rio.

@return: caractere, Imprima por extenso o nome do m�s correspondente ao n�mero existente na entrada, com a primeira letra em mai�scula.
/*/

/*Inicio da Fun��o*/
int main() {
	/*Declara��o das vari�veis*/
	int nMes = 0;
	
	/*Capturando valores digitados pelo usu�rio*/
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
		
	/*Retorno da fun��o para o fim do programa*/
	return 0;
}
