#include <stdio.h>
#include <stdlib.h>

/*/
@type: Function - int main()
@title: Media Ponderada

@author: Rafael Lima Coelho
@since: 16-10-2019
@version: RLC.1.0.URI

@description: Leia 1 valor inteiro N, que representa o número de casos de teste que vem a seguir. 
			  Cada caso de teste consiste de 3 valores reais, cada um deles com uma casa decimal. 
			  Apresente a média ponderada para cada um destes conjuntos de 3 valores, sendo que o primeiro valor tem peso 2, 
			  o segundo valor tem peso 3 e o terceiro valor tem peso 5.
			 
@param: [nN], double, Numero de entrada.
@param: [nCont], inteiro, Contador.
@param: [nResult], vetor, vetror de resultado (Media).
@param: [nValor], vetor, vetror com os valores a ser calculado.

@return: numerico, Para cada caso de teste, imprima a média ponderada dos 3 valores, conforme exemplo abaixo.
/*/

/*Inicio da Função*/
int main() {
	/*Declaração das variáveis*/
	int nN = 0;
	int nCont = 0;

	scanf("%d",&nN);
	
	double nResult[nN], nValor[3];
	
	for(nCont = 0;nCont < nN; nCont++)
	{
		scanf("%lf",&nValor[0]);
		scanf("%lf",&nValor[1]);
		scanf("%lf",&nValor[2]);
		
		nResult[nCont] = ((nValor[0] * 2) + (nValor[1] * 3) + (nValor[2] * 5))/10;		
	}	
	
	for(nCont = 0;nCont < nN;nCont++)
	{
		printf("%.1lf\n",nResult[nCont]);
	}
		
	/*Retorno da função para o fim do programa*/
	return 0;
}
