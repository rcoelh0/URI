#include <stdio.h>
#include <stdlib.h>

/*/
@type: Function - int main()
@title: Experiencias

@author: Rafael Lima Coelho
@since: 16-10-2019
@version: RLC.1.0.URI

@description: ...utiliza três tipos de cobaias: sapos, ratos e coelhos. Para obter estas informações, 
			  ela sabe exatamente o número de experimentos que foram realizados, o tipo de cobaia utilizada e a quantidade de cobaias utilizadas em cada experimento.
			 
@param: [nC], double, Numero de coelhos.
@param: [nR], double, Numero de ratos.
@param: [nS], double, Numero de sapos.
@param: [nN], inteiro, Numero de casos.
@param: [nCont], inteiro, Contador para o laco de repeticao.
@param: [nCobaias], double, Somatorio de cobais utilizadas.
@param: [cAux], texto, Auxiliar que captura qual cobaia esta sendo utilizada.
@param: [nAux], texto, Auxiliar que captura quantas cobaias esta sendo utilizada.


@return: numerico, Apresente o maior valor lido e a posição de entrada, conforme exemplo abaixo.
/*/

/*Inicio da Função*/
int main() {
	/*Declaração das variáveis*/
	int nN, nCont, nAux;
	double nC = 0.00, nR = 0.00, nS = 0.00, nCobaias = 0.00;
	char cAux;
	
	scanf("%d",&nN);
		
	for(nCont = 0;nCont < nN; nCont++)
	{
		scanf("%d %c",&nAux,&cAux);
		
		if(cAux == 'C')
		{
			nC += nAux;
		}
		if(cAux == 'R')
		{
			nR += nAux;
		}
		if(cAux == 'S')
		{
			nS += nAux;
		}
		
		nCobaias += nAux;
	}	
	
	printf("Total: %.0lf cobaias\n",nCobaias);
	
	printf("Total de coelhos: %.0lf\n",nC);
	printf("Total de ratos: %.0lf\n",nR);
	printf("Total de sapos: %.0lf\n",nS);
	
	nC = (nC/nCobaias)*100;
	nR = (nR/nCobaias)*100;
	nS = (nS/nCobaias)*100;
	
	printf("Percentual de coelhos: %.2lf %%\n",nC);
	printf("Percentual de ratos: %.2lf %%\n",nR);
	printf("Percentual de sapos: %.2lf %%\n",nS);		
	
	/*Retorno da função para o fim do programa*/
	return 0;
}
