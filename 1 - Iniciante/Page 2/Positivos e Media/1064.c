#include <stdio.h>
#include <stdlib.h>

/*/
@type: Function - int main()
@title: Positivos e Media

@author: Rafael Lima Coelho
@since: 09-08-2019
@version: RLC.1.0.URI

@description: Leia 6 valores. Em seguida, mostre quantos destes valores digitados foram positivos. 
              Na próxima linha, deve-se mostrar a média de todos os valores positivos digitados, com um dígito após o ponto decimal.
			 
@param: [nVal], double, Valor digitado pelo usuário.
@param: [nMedia], double, Media calculada dos valores positivos.
@param: [nCont], inteiro, Contador de valores positivos.
@param: [nI], inteiro, Contador do laço de repetição For.

@return: caractere, O primeiro valor de saída é a quantidade de valores positivos. A próxima linha deve mostrar a média dos valores positivos digitados.
/*/

/*Inicio da Função*/
int main() {
	/*Declaração das variáveis*/
	int nCont = 0, nI;
	double nVal = 0.0, nMedia = 0.0;
	
	for(nI = 1;nI <= 6; nI++)
	{
		scanf("%lf",&nVal);
		
		if(nVal > 0)
		{
			nMedia = nMedia + nVal;
			nCont++;
		}			
	}
	
	nMedia = nMedia / nCont;
	
	printf("%d valores positivos\n",nCont);	
	printf("%.1lf\n",nMedia);	
		
	/*Retorno da função para o fim do programa*/
	return 0;
}
