#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*/
@type: Function - int main()
@title: Idades

@author: Rafael Lima Coelho
@since: 23-10-2019
@version: RLC.1.0.URI

@description: Fa�a um algoritmo para ler um n�mero indeterminado de dados, contendo cada um, a idade de um indiv�duo. 
			  O �ltimo dado, que n�o entrar� nos c�lculos, cont�m o valor de idade negativa. Calcular e imprimir a idade m�dia deste grupo de indiv�duos.
			  A entrada cont�m um n�mero indeterminado de inteiros. A entrada ser� encerrada quando um valor negativo for lido.

@param: [iNum], inteiro, Idades inseridas.
@param: [iCont], inteiro, Contador utilizado para o calculo da m�dia.
@param: [dSoma], double, Somatorio dos numeros inseridos.

@return: double, A sa�da cont�m um valor correspondente � m�dia de idade dos indiv�duos.
				  A m�dia deve ser impressa com dois d�gitos ap�s o ponto decimal.

/*/

/*Inicio da Fun��o*/
int main() {
	/*Declara��o das vari�veis*/
	int iNum = 0, iCont;
	double dSoma = 0.00;
				
	for(iCont = -1; iNum >= 0; iCont++)
	{
		dSoma += iNum;
		
		scanf("%d",&iNum);	
	}
	
	printf("%.2lf\n",dSoma/iCont);
						
	/*Retorno da fun��o para o fim do programa*/
	return 0;
}
