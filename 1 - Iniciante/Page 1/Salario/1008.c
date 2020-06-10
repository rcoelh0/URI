#include <stdio.h>
#include <stdlib.h>

/*/
@type: Function - int main()
@title: Salário

@author: Rafael Lima Coelho
@since: 10-06-2019
@version: RLC.1.0.URI

@description: Este programa que le o número de um funcionário, seu número de horas trabalhadas, 
              o valor que recebe por hora e calcula o salário desse funcionário. 
@param: [nMat], inteiro, Guarda o primeiro numero digitado pelo usuário.
@param: [nVal], inteiro, Guarda o segundo numero digitado pelo usuário.
@param: [nHora], double, Guarda o terceiro numero digitado pelo usuário.
@param: [nSal], double, Guarda a soma das variáveis nVal * nHora.

@return: numerico, Mostra o número[nMat].
@return: numerico, Salário do funcionário, com duas casas decimais[nSal].

/*/

/*Inicio da Função*/
int main() {
	/*Declaração das variáveis*/
	int nMat = 0, nVal = 0;
	double nHora = 0.00, nSal = 0.00;
	
	/*Capturando valores digitados pelo usuário*/
	scanf("%d",&nMat);
	scanf("%d",&nVal);
	scanf("%lf",&nHora);
	
	/*Calculando o valor da Salário*/	
	nSal = (nVal * nHora);
	
	/*Mostrando na tela o numero*/
	printf("NUMBER = %d\n", nMat);
	/*Mostrando na tela o salário*/
	printf("SALARY = U$ %.2lf\n", nSal);
	
	/*Retorno da função para o fim do programa*/
	return 0;
}
