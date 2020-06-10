#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*/
@type: Function - int main()
@title: Sequencia S II

@author: Rafael Lima Coelho
@since: 23-10-2019
@version: RLC.1.0.URI

@description: Escreva um algoritmo para calcular e escrever o valor de S, sendo S dado pela fórmula:
			  S = 1 + 3/2 + 5/4 + 7/8 + ... + 39/?

@param: [iDeno], inteiro, Denominador que é dobrado a cada calculo.
@param: [dNumer], double, Numerador que incrementa 2 a cada calculo.
@param: [dS], double, Resultado de S.

@return: double, A saída contém um valor correspondente ao valor de S.
				 O valor deve ser impresso com dois dígitos após o ponto decimal.	

/*/

/*Inicio da Função*/
int main() {
	/*Declaração das variáveis*/
	int iDeno;
	double dS = 1.00, dNumer = 3.00;
				
	for(iDeno = 2; dNumer <= 39; iDeno *= 2)
	{
		
		dS += (dNumer/iDeno);
		dNumer += 2.00;
	}
	
	printf("%.2lf\n",dS);
						
	/*Retorno da função para o fim do programa*/
	return 0;
}
