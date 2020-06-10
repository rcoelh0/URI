#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*/
@type: Function - int main()
@title: Idades

@author: Rafael Lima Coelho
@since: 23-10-2019
@version: RLC.1.0.URI

@description: Faça um algoritmo para ler um número indeterminado de dados, contendo cada um, a idade de um indivíduo. 
			  O último dado, que não entrará nos cálculos, contém o valor de idade negativa. Calcular e imprimir a idade média deste grupo de indivíduos.
			  A entrada contém um número indeterminado de inteiros. A entrada será encerrada quando um valor negativo for lido.

@param: [iNum], inteiro, Idades inseridas.
@param: [iCont], inteiro, Contador utilizado para o calculo da média.
@param: [dSoma], double, Somatorio dos numeros inseridos.

@return: double, A saída contém um valor correspondente à média de idade dos indivíduos.
				  A média deve ser impressa com dois dígitos após o ponto decimal.

/*/

/*Inicio da Função*/
int main() {
	/*Declaração das variáveis*/
	int iNum = 0, iCont;
	double dSoma = 0.00;
				
	for(iCont = -1; iNum >= 0; iCont++)
	{
		dSoma += iNum;
		
		scanf("%d",&iNum);	
	}
	
	printf("%.2lf\n",dSoma/iCont);
						
	/*Retorno da função para o fim do programa*/
	return 0;
}
