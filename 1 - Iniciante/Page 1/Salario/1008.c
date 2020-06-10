#include <stdio.h>
#include <stdlib.h>

/*/
@type: Function - int main()
@title: Sal�rio

@author: Rafael Lima Coelho
@since: 10-06-2019
@version: RLC.1.0.URI

@description: Este programa que le o n�mero de um funcion�rio, seu n�mero de horas trabalhadas, 
              o valor que recebe por hora e calcula o sal�rio desse funcion�rio. 
@param: [nMat], inteiro, Guarda o primeiro numero digitado pelo usu�rio.
@param: [nVal], inteiro, Guarda o segundo numero digitado pelo usu�rio.
@param: [nHora], double, Guarda o terceiro numero digitado pelo usu�rio.
@param: [nSal], double, Guarda a soma das vari�veis nVal * nHora.

@return: numerico, Mostra o n�mero[nMat].
@return: numerico, Sal�rio do funcion�rio, com duas casas decimais[nSal].

/*/

/*Inicio da Fun��o*/
int main() {
	/*Declara��o das vari�veis*/
	int nMat = 0, nVal = 0;
	double nHora = 0.00, nSal = 0.00;
	
	/*Capturando valores digitados pelo usu�rio*/
	scanf("%d",&nMat);
	scanf("%d",&nVal);
	scanf("%lf",&nHora);
	
	/*Calculando o valor da Sal�rio*/	
	nSal = (nVal * nHora);
	
	/*Mostrando na tela o numero*/
	printf("NUMBER = %d\n", nMat);
	/*Mostrando na tela o sal�rio*/
	printf("SALARY = U$ %.2lf\n", nSal);
	
	/*Retorno da fun��o para o fim do programa*/
	return 0;
}
