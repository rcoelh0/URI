#include <stdio.h>
#include <stdlib.h>

/*/
@type: Function - int main()
@title: C�lculo Simples

@author: Rafael Lima Coelho
@since: 10-06-2019
@version: RLC.1.0.URI

@description: Eeste Programa le o c�digo de uma pe�a 1, o n�mero de pe�as 1, o valor unit�rio de cada pe�a 1, 
		      o c�digo de uma pe�a 2, o n�mero de pe�as 2 e o valor unit�rio de cada pe�a 2. 
@param: [nCont], inteiro, Guarda um numero auxiliar para execu��o do for. � um contador.		      
@param: [nCod], inteiro, Guarda o primeiro numero digitado pelo usu�rio.
@param: [nNum], inteiro, Guarda o segundo numero digitado pelo usu�rio.
@param: [nVal], double, Guarda o terceiro numero digitado pelo usu�rio.
@param: [nTotal], double, Guarda a soma das vari�veis nTotal += (nNum * nVal) em um la�o de repeti��o.

@return: numerico, mostra o valor a ser pago nas pe�as.
/*/

/*Inicio da Fun��o*/
int main() {
	/*Declara��o das vari�veis*/
	int nCod = 0, nNum = 0, nCont;
	double nVal = 0.00, nTotal = 0.00;
	
	/*La�o de repeti��o 'for', utilizado para executar as linhas 31 a 39 duas vezes*/
	for(nCont = 1;nCont <= 2;nCont++)
	{
		/*Capturando valores digitados pelo usu�rio*/
		scanf("%d",&nCod);
		scanf("%d",&nNum);
		scanf("%lf",&nVal);
		
		/*Calculando o valor do total*/	
		nTotal += (nNum * nVal);
	}
		
	/*Mostrando na tela o total*/
	printf("VALOR A PAGAR: R$ %.2lf\n", nTotal);
	
	/*Retorno da fun��o para o fim do programa*/
	return 0;
}
