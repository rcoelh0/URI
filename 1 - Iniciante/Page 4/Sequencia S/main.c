#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*/
@type: Function - int main()
@title: Sequencia S

@author: Rafael Lima Coelho
@since: 23-10-2019
@version: RLC.1.0.URI

@description: Escreva um algoritmo para calcular e escrever o valor de S, sendo S dado pela fórmula:
			  S = 1 + 1/2 + 1/3 + … + 1/100	

@param: [iCont], inteiro, Contador utilizado para o calculo da média.
@param: [dS], double, Resultado de S.

@return: double, A saída contém um valor correspondente ao valor de S.
				 O valor deve ser impresso com dois dígitos após o ponto decimal.	

/*/

/*Inicio da Função*/
int main() {
	/*Declaração das variáveis*/
	int iCont;
	double dS = 0.00;
				
	for(iCont = 1; iCont <= 100; iCont++)
	{
		dS += (1.00000/iCont);
	}
	
	printf("%.2lf\n",dS);
						
	/*Retorno da função para o fim do programa*/
	return 0;
}
